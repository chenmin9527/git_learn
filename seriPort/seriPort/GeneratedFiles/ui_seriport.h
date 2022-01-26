/********************************************************************************
** Form generated from reading UI file 'seriport.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIPORT_H
#define UI_SERIPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_seriPortClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *seriPortClass)
    {
        if (seriPortClass->objectName().isEmpty())
            seriPortClass->setObjectName(QString::fromUtf8("seriPortClass"));
        seriPortClass->resize(600, 400);
        centralWidget = new QWidget(seriPortClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 120, 75, 23));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(30, 120, 113, 20));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(30, 30, 111, 71));
        seriPortClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(seriPortClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 22));
        seriPortClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(seriPortClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        seriPortClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(seriPortClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        seriPortClass->setStatusBar(statusBar);

        retranslateUi(seriPortClass);

        QMetaObject::connectSlotsByName(seriPortClass);
    } // setupUi

    void retranslateUi(QMainWindow *seriPortClass)
    {
        seriPortClass->setWindowTitle(QCoreApplication::translate("seriPortClass", "seriPort", nullptr));
        pushButton->setText(QCoreApplication::translate("seriPortClass", "\345\217\221\351\200\201\346\225\260\346\215\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class seriPortClass: public Ui_seriPortClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIPORT_H
