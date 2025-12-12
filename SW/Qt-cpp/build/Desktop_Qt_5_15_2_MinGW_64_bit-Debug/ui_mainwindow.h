/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_3;
    QComboBox *port_cb;
    QComboBox *stopBit_cb;
    QComboBox *dataBit_cb;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *connect_butt;
    QLabel *label_3;
    QComboBox *parity_cb;
    QTextBrowser *status_lb;
    QComboBox *baud_cb;
    QLabel *label_2;
    QGroupBox *groupBox;
    QLineEdit *ki_tb;
    QLineEdit *kp_tb;
    QLabel *label_6;
    QLineEdit *sp_tb;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *kd_tb;
    QLabel *label_7;
    QPushButton *stop_bt;
    QPushButton *spid_tb;
    QPushButton *export_bt;
    QLineEdit *pwm_tb;
    QLabel *label_13;
    QPushButton *pwm_bt;
    QPushButton *dir_bt;
    QCustomPlot *plot;
    QLineEdit *val_txt;
    QGroupBox *groupBox_2;
    QTextBrowser *trans_pl_tb;
    QPushButton *trans_pl_bt;
    QTextBrowser *rec_pl_tb;
    QLabel *label_12;
    QPushButton *rec_pl_bt;
    QLabel *label_11;
    QCustomPlot *plotError;
    QLineEdit *err_txt;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1434, 716);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(40, 30, 221, 351));
        groupBox_3->setAlignment(Qt::AlignCenter);
        groupBox_3->setFlat(false);
        groupBox_3->setCheckable(false);
        port_cb = new QComboBox(groupBox_3);
        port_cb->setObjectName(QString::fromUtf8("port_cb"));
        port_cb->setGeometry(QRect(110, 50, 91, 31));
        stopBit_cb = new QComboBox(groupBox_3);
        stopBit_cb->addItem(QString());
        stopBit_cb->addItem(QString());
        stopBit_cb->addItem(QString());
        stopBit_cb->setObjectName(QString::fromUtf8("stopBit_cb"));
        stopBit_cb->setGeometry(QRect(110, 169, 91, 31));
        dataBit_cb = new QComboBox(groupBox_3);
        dataBit_cb->addItem(QString());
        dataBit_cb->addItem(QString());
        dataBit_cb->addItem(QString());
        dataBit_cb->addItem(QString());
        dataBit_cb->setObjectName(QString::fromUtf8("dataBit_cb"));
        dataBit_cb->setGeometry(QRect(110, 129, 91, 31));
        dataBit_cb->setEditable(false);
        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 49, 81, 31));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 168, 81, 31));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 208, 81, 31));
        connect_butt = new QPushButton(groupBox_3);
        connect_butt->setObjectName(QString::fromUtf8("connect_butt"));
        connect_butt->setGeometry(QRect(20, 249, 181, 41));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        connect_butt->setFont(font);
        connect_butt->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 0)"));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 128, 81, 31));
        parity_cb = new QComboBox(groupBox_3);
        parity_cb->addItem(QString());
        parity_cb->addItem(QString());
        parity_cb->addItem(QString());
        parity_cb->addItem(QString());
        parity_cb->addItem(QString());
        parity_cb->setObjectName(QString::fromUtf8("parity_cb"));
        parity_cb->setGeometry(QRect(110, 209, 91, 31));
        status_lb = new QTextBrowser(groupBox_3);
        status_lb->setObjectName(QString::fromUtf8("status_lb"));
        status_lb->setGeometry(QRect(20, 300, 181, 31));
        status_lb->setReadOnly(true);
        baud_cb = new QComboBox(groupBox_3);
        baud_cb->setObjectName(QString::fromUtf8("baud_cb"));
        baud_cb->setGeometry(QRect(110, 89, 91, 31));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 88, 81, 31));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(290, 30, 311, 291));
        QFont font1;
        font1.setPointSize(9);
        groupBox->setFont(font1);
        groupBox->setTitle(QString::fromUtf8("PID CONTROLLER"));
        groupBox->setAlignment(Qt::AlignCenter);
        ki_tb = new QLineEdit(groupBox);
        ki_tb->setObjectName(QString::fromUtf8("ki_tb"));
        ki_tb->setGeometry(QRect(115, 76, 71, 25));
        kp_tb = new QLineEdit(groupBox);
        kp_tb->setObjectName(QString::fromUtf8("kp_tb"));
        kp_tb->setGeometry(QRect(115, 45, 71, 25));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 50, 19, 17));
        sp_tb = new QLineEdit(groupBox);
        sp_tb->setObjectName(QString::fromUtf8("sp_tb"));
        sp_tb->setGeometry(QRect(115, 138, 71, 25));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(38, 110, 20, 20));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 130, 71, 31));
        kd_tb = new QLineEdit(groupBox);
        kd_tb->setObjectName(QString::fromUtf8("kd_tb"));
        kd_tb->setGeometry(QRect(115, 107, 71, 25));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(40, 80, 16, 17));
        stop_bt = new QPushButton(groupBox);
        stop_bt->setObjectName(QString::fromUtf8("stop_bt"));
        stop_bt->setGeometry(QRect(200, 80, 91, 31));
        spid_tb = new QPushButton(groupBox);
        spid_tb->setObjectName(QString::fromUtf8("spid_tb"));
        spid_tb->setGeometry(QRect(200, 40, 91, 31));
        export_bt = new QPushButton(groupBox);
        export_bt->setObjectName(QString::fromUtf8("export_bt"));
        export_bt->setGeometry(QRect(200, 250, 91, 31));
        pwm_tb = new QLineEdit(groupBox);
        pwm_tb->setObjectName(QString::fromUtf8("pwm_tb"));
        pwm_tb->setGeometry(QRect(110, 190, 81, 25));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(30, 190, 71, 20));
        pwm_bt = new QPushButton(groupBox);
        pwm_bt->setObjectName(QString::fromUtf8("pwm_bt"));
        pwm_bt->setGeometry(QRect(200, 190, 91, 31));
        dir_bt = new QPushButton(groupBox);
        dir_bt->setObjectName(QString::fromUtf8("dir_bt"));
        dir_bt->setGeometry(QRect(200, 120, 91, 31));
        plot = new QCustomPlot(centralwidget);
        plot->setObjectName(QString::fromUtf8("plot"));
        plot->setGeometry(QRect(700, 30, 671, 351));
        val_txt = new QLineEdit(plot);
        val_txt->setObjectName(QString::fromUtf8("val_txt"));
        val_txt->setGeometry(QRect(530, 90, 113, 25));
        val_txt->setReadOnly(true);
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setEnabled(true);
        groupBox_2->setGeometry(QRect(280, 340, 391, 281));
        groupBox_2->setAlignment(Qt::AlignCenter);
        groupBox_2->setCheckable(true);
        trans_pl_tb = new QTextBrowser(groupBox_2);
        trans_pl_tb->setObjectName(QString::fromUtf8("trans_pl_tb"));
        trans_pl_tb->setGeometry(QRect(20, 50, 171, 192));
        trans_pl_bt = new QPushButton(groupBox_2);
        trans_pl_bt->setObjectName(QString::fromUtf8("trans_pl_bt"));
        trans_pl_bt->setGeometry(QRect(20, 248, 80, 25));
        rec_pl_tb = new QTextBrowser(groupBox_2);
        rec_pl_tb->setObjectName(QString::fromUtf8("rec_pl_tb"));
        rec_pl_tb->setGeometry(QRect(210, 51, 171, 192));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(260, 30, 53, 17));
        rec_pl_bt = new QPushButton(groupBox_2);
        rec_pl_bt->setObjectName(QString::fromUtf8("rec_pl_bt"));
        rec_pl_bt->setGeometry(QRect(210, 251, 80, 25));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(70, 30, 60, 17));
        label_11->setAlignment(Qt::AlignCenter);
        plotError = new QCustomPlot(centralwidget);
        plotError->setObjectName(QString::fromUtf8("plotError"));
        plotError->setGeometry(QRect(700, 390, 671, 281));
        err_txt = new QLineEdit(plotError);
        err_txt->setObjectName(QString::fromUtf8("err_txt"));
        err_txt->setGeometry(QRect(550, 0, 113, 25));
        err_txt->setReadOnly(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1434, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "CONNECTION SETTINGS", nullptr));
        stopBit_cb->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        stopBit_cb->setItemText(1, QCoreApplication::translate("MainWindow", "1,5", nullptr));
        stopBit_cb->setItemText(2, QCoreApplication::translate("MainWindow", "2", nullptr));

        dataBit_cb->setItemText(0, QCoreApplication::translate("MainWindow", "5 ", nullptr));
        dataBit_cb->setItemText(1, QCoreApplication::translate("MainWindow", "6 ", nullptr));
        dataBit_cb->setItemText(2, QCoreApplication::translate("MainWindow", "7 ", nullptr));
        dataBit_cb->setItemText(3, QCoreApplication::translate("MainWindow", "8 ", nullptr));

        dataBit_cb->setCurrentText(QCoreApplication::translate("MainWindow", "5 ", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Serial Port", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Stop Bits", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Parity", nullptr));
        connect_butt->setText(QCoreApplication::translate("MainWindow", "CONNECT", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Data Bits", nullptr));
        parity_cb->setItemText(0, QCoreApplication::translate("MainWindow", "No Parity", nullptr));
        parity_cb->setItemText(1, QCoreApplication::translate("MainWindow", "Even Parity", nullptr));
        parity_cb->setItemText(2, QCoreApplication::translate("MainWindow", "Odd Parity", nullptr));
        parity_cb->setItemText(3, QCoreApplication::translate("MainWindow", "Mark Parity", nullptr));
        parity_cb->setItemText(4, QCoreApplication::translate("MainWindow", "Space Parity", nullptr));

        label_2->setText(QCoreApplication::translate("MainWindow", "Baudrate", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Kp", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Kd", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "SP (rpm)", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Ki", nullptr));
        stop_bt->setText(QCoreApplication::translate("MainWindow", "STOP", nullptr));
        spid_tb->setText(QCoreApplication::translate("MainWindow", "START", nullptr));
        export_bt->setText(QCoreApplication::translate("MainWindow", "EXPORT", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Set Freq", nullptr));
        pwm_bt->setText(QCoreApplication::translate("MainWindow", "SET FREQ", nullptr));
        dir_bt->setText(QCoreApplication::translate("MainWindow", "REVERSE", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "DEBUG LOG", nullptr));
        trans_pl_bt->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Receive", nullptr));
        rec_pl_bt->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Transmit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
