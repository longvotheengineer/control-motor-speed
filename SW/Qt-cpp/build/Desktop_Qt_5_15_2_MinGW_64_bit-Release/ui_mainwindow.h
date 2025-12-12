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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
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
    QCheckBox *cb_show_log;
    QLabel *lb_led_tx;
    QLabel *lb_led_rx;
    QGroupBox *groupBox;
    QLineEdit *ki_tb;
    QLineEdit *kp_tb;
    QLabel *label_6;
    QLineEdit *sp_tb;
    QLabel *label_10;
    QLineEdit *kd_tb;
    QLabel *label_7;
    QPushButton *stop_bt;
    QPushButton *dir_bt;
    QPushButton *spid_bt;
    QLabel *label_9;
    QCustomPlot *plot;
    QGroupBox *gb_debugLog;
    QTextBrowser *trans_pl_tb;
    QPushButton *trans_pl_bt;
    QTextBrowser *rec_pl_tb;
    QLabel *label_12;
    QPushButton *rec_pl_bt;
    QLabel *label_11;
    QCustomPlot *plotError;
    QGroupBox *groupBox_4;
    QLineEdit *pwm_tb;
    QPushButton *pwm_bt;
    QGroupBox *groupBox_5;
    QLabel *label_8;
    QLabel *label_13;
    QPushButton *export_bt;
    QLCDNumber *lcd_err;
    QLCDNumber *lcd_val;
    QLabel *lb_motor_status;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1536, 714);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(30, 20, 221, 411));
        QFont font;
        font.setPointSize(9);
        groupBox_3->setFont(font);
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
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        connect_butt->setFont(font1);
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
        cb_show_log = new QCheckBox(groupBox_3);
        cb_show_log->setObjectName(QString::fromUtf8("cb_show_log"));
        cb_show_log->setGeometry(QRect(30, 380, 161, 25));
        lb_led_tx = new QLabel(groupBox_3);
        lb_led_tx->setObjectName(QString::fromUtf8("lb_led_tx"));
        lb_led_tx->setGeometry(QRect(60, 340, 31, 31));
        lb_led_rx = new QLabel(groupBox_3);
        lb_led_rx->setObjectName(QString::fromUtf8("lb_led_rx"));
        lb_led_rx->setGeometry(QRect(130, 340, 31, 31));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(270, 20, 201, 261));
        groupBox->setFont(font);
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
        label_6->setGeometry(QRect(40, 40, 19, 31));
        sp_tb = new QLineEdit(groupBox);
        sp_tb->setObjectName(QString::fromUtf8("sp_tb"));
        sp_tb->setGeometry(QRect(115, 138, 71, 25));
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
        stop_bt->setGeometry(QRect(110, 180, 81, 31));
        dir_bt = new QPushButton(groupBox);
        dir_bt->setObjectName(QString::fromUtf8("dir_bt"));
        dir_bt->setGeometry(QRect(60, 220, 81, 31));
        spid_bt = new QPushButton(groupBox);
        spid_bt->setObjectName(QString::fromUtf8("spid_bt"));
        spid_bt->setGeometry(QRect(10, 180, 81, 31));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(40, 100, 31, 31));
        plot = new QCustomPlot(centralwidget);
        plot->setObjectName(QString::fromUtf8("plot"));
        plot->setGeometry(QRect(700, 30, 781, 371));
        gb_debugLog = new QGroupBox(centralwidget);
        gb_debugLog->setObjectName(QString::fromUtf8("gb_debugLog"));
        gb_debugLog->setEnabled(true);
        gb_debugLog->setGeometry(QRect(280, 310, 391, 331));
        QFont font2;
        font2.setPointSize(10);
        gb_debugLog->setFont(font2);
        gb_debugLog->setAlignment(Qt::AlignCenter);
        gb_debugLog->setCheckable(false);
        trans_pl_tb = new QTextBrowser(gb_debugLog);
        trans_pl_tb->setObjectName(QString::fromUtf8("trans_pl_tb"));
        trans_pl_tb->setGeometry(QRect(20, 50, 171, 221));
        trans_pl_bt = new QPushButton(gb_debugLog);
        trans_pl_bt->setObjectName(QString::fromUtf8("trans_pl_bt"));
        trans_pl_bt->setGeometry(QRect(20, 290, 80, 25));
        rec_pl_tb = new QTextBrowser(gb_debugLog);
        rec_pl_tb->setObjectName(QString::fromUtf8("rec_pl_tb"));
        rec_pl_tb->setGeometry(QRect(200, 51, 171, 221));
        label_12 = new QLabel(gb_debugLog);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(250, 30, 61, 17));
        rec_pl_bt = new QPushButton(gb_debugLog);
        rec_pl_bt->setObjectName(QString::fromUtf8("rec_pl_bt"));
        rec_pl_bt->setGeometry(QRect(200, 293, 80, 25));
        label_11 = new QLabel(gb_debugLog);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(70, 30, 81, 17));
        label_11->setAlignment(Qt::AlignCenter);
        plotError = new QCustomPlot(centralwidget);
        plotError->setObjectName(QString::fromUtf8("plotError"));
        plotError->setGeometry(QRect(700, 440, 781, 191));
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(490, 20, 191, 81));
        groupBox_4->setFont(font);
        groupBox_4->setAlignment(Qt::AlignCenter);
        pwm_tb = new QLineEdit(groupBox_4);
        pwm_tb->setObjectName(QString::fromUtf8("pwm_tb"));
        pwm_tb->setGeometry(QRect(20, 40, 71, 25));
        pwm_bt = new QPushButton(groupBox_4);
        pwm_bt->setObjectName(QString::fromUtf8("pwm_bt"));
        pwm_bt->setGeometry(QRect(100, 40, 71, 31));
        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(490, 110, 191, 171));
        groupBox_5->setFont(font);
        groupBox_5->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 30, 31, 31));
        label_13 = new QLabel(groupBox_5);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(30, 70, 31, 21));
        export_bt = new QPushButton(groupBox_5);
        export_bt->setObjectName(QString::fromUtf8("export_bt"));
        export_bt->setGeometry(QRect(100, 110, 81, 31));
        lcd_err = new QLCDNumber(groupBox_5);
        lcd_err->setObjectName(QString::fromUtf8("lcd_err"));
        lcd_err->setGeometry(QRect(110, 70, 64, 23));
        lcd_err->setDigitCount(6);
        lcd_err->setSegmentStyle(QLCDNumber::Flat);
        lcd_val = new QLCDNumber(groupBox_5);
        lcd_val->setObjectName(QString::fromUtf8("lcd_val"));
        lcd_val->setGeometry(QRect(110, 30, 64, 23));
        lcd_val->setSmallDecimalPoint(false);
        lcd_val->setDigitCount(6);
        lcd_val->setSegmentStyle(QLCDNumber::Flat);
        lb_motor_status = new QLabel(groupBox_5);
        lb_motor_status->setObjectName(QString::fromUtf8("lb_motor_status"));
        lb_motor_status->setGeometry(QRect(10, 100, 81, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1536, 25));
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
        cb_show_log->setText(QCoreApplication::translate("MainWindow", "SHOW DEBUG LOG", nullptr));
        lb_led_tx->setText(QString());
        lb_led_rx->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "Kp", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "SP (rpm)", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Ki", nullptr));
        stop_bt->setText(QCoreApplication::translate("MainWindow", "STOP", nullptr));
        dir_bt->setText(QCoreApplication::translate("MainWindow", "REVERSE", nullptr));
        spid_bt->setText(QCoreApplication::translate("MainWindow", "START", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Kd", nullptr));
        gb_debugLog->setTitle(QCoreApplication::translate("MainWindow", "DEBUG LOG", nullptr));
        trans_pl_bt->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Receive", nullptr));
        rec_pl_bt->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Transmit", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "FREQUENCY (Hz)", nullptr));
        pwm_bt->setText(QCoreApplication::translate("MainWindow", "SET ", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "STATUS", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Val", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Error", nullptr));
        export_bt->setText(QCoreApplication::translate("MainWindow", "EXPORT", nullptr));
        lb_motor_status->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
