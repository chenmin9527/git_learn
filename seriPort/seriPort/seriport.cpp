#include "seriport.h"

seriPort::seriPort(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	init();
}

seriPort::~seriPort()
{

}

void seriPort::init()
{
	
	m_serPort1.setPortName("COM1");
	m_serPort1.open(QIODevice::ReadWrite);
	m_serPort1.setBaudRate(19200);
	m_serPort1.setDataBits(QSerialPort::Data8);
	m_serPort1.setParity(QSerialPort::NoParity);
	m_serPort1.setStopBits(QSerialPort::OneStop);
	m_serPort1.setFlowControl(QSerialPort::NoFlowControl);
	connect(&m_serPort1, &QSerialPort::readyRead, this, &seriPort::recData1);


	m_serPort2.setPortName("COM2");
	m_serPort2.open(QIODevice::ReadWrite);
	m_serPort2.setBaudRate(19200);
	m_serPort2.setDataBits(QSerialPort::Data8);
	m_serPort2.setParity(QSerialPort::NoParity);
	m_serPort2.setStopBits(QSerialPort::OneStop);
	m_serPort2.setFlowControl(QSerialPort::NoFlowControl);
	connect(&m_serPort2, &QSerialPort::readyRead, this, &seriPort::recData2);
}

void seriPort::recData1()
{
	QByteArray data = m_serPort1.readAll();

	RECDATA *rec=reinterpret_cast<RECDATA*>(data.data());//将字节数据强制指定为数据结构地址

	if (data.isEmpty()) {
		QMessageBox::about(this, "error", "get nothing");
		return;
	}
	ui.textEdit->append(QString::fromLocal8Bit(data));
}
void seriPort::recData2() {
	QByteArray data = m_serPort2.readAll();
	if (data.isEmpty()) {
		QMessageBox::about(this, "error", "get nothing");
		return;
	}
	ui.textEdit->append(QString::fromLocal8Bit(data));
}
void seriPort::on_pushButton_clicked()
{
	QByteArray w_char;
	w_char.append(char(0x01));//从机地址
	w_char.append(char(0x03));//功能号
	w_char.append(char(0x00));//地址
	w_char.append(char(0x00));
	w_char.append(char(0x00));//读取多少寄存器中的数据
	w_char.append(char(0x0a));
	w_char.append(char(0xc5));//校验码
	w_char.append(char(0xcd));
	m_serPort1.write(w_char);
	//m_serPort.write(ui.lineEdit->text().toLatin1());
}
