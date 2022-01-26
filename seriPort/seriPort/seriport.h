#ifndef SERIPORT_H
#define SERIPORT_H

#include <QtWidgets/QMainWindow>
#include "ui_seriport.h"
#include<QtSerialPort\qserialport.h>
#include <QtSerialPort/QSerialPortInfo> 
#include<qmessagebox.h>
class seriPort : public QMainWindow
{
	Q_OBJECT

public:
	seriPort(QWidget *parent = 0);
	~seriPort();
	void init();
public slots:
	void recData2();
	void recData1();
	void on_pushButton_clicked();
private:
	Ui::seriPortClass ui;
	QSerialPort m_serPort1;
	QSerialPort m_serPort2;
	struct RECDATA{
		char addr;
		char function;
		unsigned short dataaddr;
		unsigned short datanum[13];
	};
};

#endif // SERIPORT_H
//w_char.append(char(0x01));//�ӻ���ַ
//w_char.append(char(0x03));//���ܺ�
//w_char.append(char(0x00));//��ַ
//w_char.append(char(0x00));
//w_char.append(char(0x00));//��ȡ���ټĴ����е�����
//w_char.append(char(0x0a));
//w_char.append(char(0xc5));//У����
//w_char.append(char(0xcd));