/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit_r3;
    QLineEdit *lineEdit_r1;
    QPushButton *pushButton_Calc;
    QLineEdit *lineEdit_r2;
    QLabel *label_result;
    QLabel *label_condition;
    QLabel *label_R1;
    QLabel *label_R2;
    QLabel *label_R3;
    QLabel *label_result_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(466, 449);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lineEdit_r3 = new QLineEdit(centralwidget);
        lineEdit_r3->setObjectName("lineEdit_r3");
        lineEdit_r3->setGeometry(QRect(110, 230, 113, 22));
        lineEdit_r1 = new QLineEdit(centralwidget);
        lineEdit_r1->setObjectName("lineEdit_r1");
        lineEdit_r1->setGeometry(QRect(110, 130, 113, 22));
        pushButton_Calc = new QPushButton(centralwidget);
        pushButton_Calc->setObjectName("pushButton_Calc");
        pushButton_Calc->setGeometry(QRect(110, 280, 101, 31));
        lineEdit_r2 = new QLineEdit(centralwidget);
        lineEdit_r2->setObjectName("lineEdit_r2");
        lineEdit_r2->setGeometry(QRect(110, 180, 113, 22));
        label_result = new QLabel(centralwidget);
        label_result->setObjectName("label_result");
        label_result->setGeometry(QRect(120, 320, 51, 41));
        label_condition = new QLabel(centralwidget);
        label_condition->setObjectName("label_condition");
        label_condition->setGeometry(QRect(110, 50, 341, 41));
        label_R1 = new QLabel(centralwidget);
        label_R1->setObjectName("label_R1");
        label_R1->setGeometry(QRect(110, 110, 63, 20));
        label_R2 = new QLabel(centralwidget);
        label_R2->setObjectName("label_R2");
        label_R2->setGeometry(QRect(110, 160, 61, 21));
        label_R3 = new QLabel(centralwidget);
        label_R3->setObjectName("label_R3");
        label_R3->setGeometry(QRect(110, 210, 63, 20));
        label_result_2 = new QLabel(centralwidget);
        label_result_2->setObjectName("label_result_2");
        label_result_2->setGeometry(QRect(180, 320, 71, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 466, 32));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(lineEdit_r1, lineEdit_r2);
        QWidget::setTabOrder(lineEdit_r2, lineEdit_r3);
        QWidget::setTabOrder(lineEdit_r3, pushButton_Calc);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
#if QT_CONFIG(statustip)
        lineEdit_r1->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        lineEdit_r1->setText(QString());
        pushButton_Calc->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\207\320\270\321\201\320\273\320\270\321\202\321\214", nullptr));
        label_result->setText(QString());
        label_condition->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\207\320\265\321\202 \320\277\320\260\321\200\320\260\320\273\320\273\320\265\320\273\321\214\320\275\320\276\320\263\320\276 \321\201\320\276\320\265\320\264\320\270\320\275\320\265\320\275\320\270\321\217 \321\200\320\265\320\267\320\270\321\201\321\202\320\276\321\200\320\276\320\262", nullptr));
        label_R1->setText(QCoreApplication::translate("MainWindow", "R1:", nullptr));
        label_R2->setText(QCoreApplication::translate("MainWindow", "R2:", nullptr));
        label_R3->setText(QCoreApplication::translate("MainWindow", "R3:", nullptr));
        label_result_2->setText(QCoreApplication::translate("MainWindow", "\320\236\320\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
