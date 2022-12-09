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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_condition;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_R1;
    QLineEdit *lineEdit_r1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_R2;
    QLineEdit *lineEdit_r2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_R3;
    QLineEdit *lineEdit_r3;
    QLabel *label;
    QPushButton *pushButton_Calc;
    QHBoxLayout *horizontalLayout;
    QLabel *label_result;
    QLabel *label_result_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(648, 629);
        MainWindow->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 255);\n"
"font: 12pt \"Segoe UI\";\n"
"background-color: rgb(165, 255, 242);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label_condition = new QLabel(centralwidget);
        label_condition->setObjectName("label_condition");
        label_condition->setGeometry(QRect(50, 50, 571, 31));
        label_condition->setMaximumSize(QSize(571, 31));
        label_condition->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(173, 0, 208);"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(130, 120, 251, 435));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_R1 = new QLabel(layoutWidget);
        label_R1->setObjectName("label_R1");

        horizontalLayout_2->addWidget(label_R1);

        lineEdit_r1 = new QLineEdit(layoutWidget);
        lineEdit_r1->setObjectName("lineEdit_r1");
        lineEdit_r1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(lineEdit_r1);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_R2 = new QLabel(layoutWidget);
        label_R2->setObjectName("label_R2");

        horizontalLayout_3->addWidget(label_R2, 0, Qt::AlignLeft);

        lineEdit_r2 = new QLineEdit(layoutWidget);
        lineEdit_r2->setObjectName("lineEdit_r2");
        lineEdit_r2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(lineEdit_r2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_R3 = new QLabel(layoutWidget);
        label_R3->setObjectName("label_R3");

        horizontalLayout_4->addWidget(label_R3);

        lineEdit_r3 = new QLineEdit(layoutWidget);
        lineEdit_r3->setObjectName("lineEdit_r3");
        lineEdit_r3->setMinimumSize(QSize(149, 0));
        lineEdit_r3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(lineEdit_r3);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setMaximumSize(QSize(291, 461));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/file/image_1")));

        verticalLayout_3->addWidget(label);

        pushButton_Calc = new QPushButton(layoutWidget);
        pushButton_Calc->setObjectName("pushButton_Calc");
        pushButton_Calc->setEnabled(true);
        pushButton_Calc->setMinimumSize(QSize(182, 50));
        pushButton_Calc->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(pushButton_Calc);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_result = new QLabel(layoutWidget);
        label_result->setObjectName("label_result");
        label_result->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 255);\n"
"font: 16pt \"Verdana\";"));

        horizontalLayout->addWidget(label_result, 0, Qt::AlignRight);

        label_result_2 = new QLabel(layoutWidget);
        label_result_2->setObjectName("label_result_2");
        label_result_2->setMaximumSize(QSize(80, 50));
        label_result_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 255);\n"
"font: 16pt \"Verdana\";"));

        horizontalLayout->addWidget(label_result_2, 0, Qt::AlignLeft);


        verticalLayout_3->addLayout(horizontalLayout);


        horizontalLayout_5->addLayout(verticalLayout_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 648, 33));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Resistance calculation", nullptr));
        label_condition->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\207\320\265\321\202 \321\201\321\203\320\274\320\274\321\213 \320\277\320\260\321\200\320\260\320\273\320\273\320\265\320\273\321\214\320\275\320\276\320\263\320\276 \321\201\320\276\320\265\320\264\320\270\320\275\320\265\320\275\320\270\321\217 \321\200\320\265\320\267\320\270\321\201\321\202\320\276\321\200\320\276\320\262", nullptr));
        label_R1->setText(QCoreApplication::translate("MainWindow", "R1:", nullptr));
#if QT_CONFIG(statustip)
        lineEdit_r1->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        lineEdit_r1->setText(QCoreApplication::translate("MainWindow", "24", nullptr));
        label_R2->setText(QCoreApplication::translate("MainWindow", "R2:", nullptr));
        lineEdit_r2->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        label_R3->setText(QCoreApplication::translate("MainWindow", "R3:", nullptr));
        lineEdit_r3->setText(QCoreApplication::translate("MainWindow", "12", nullptr));
        label->setText(QString());
        pushButton_Calc->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\207\320\270\321\201\320\273\320\270\321\202\321\214", nullptr));
        label_result->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_result_2->setText(QCoreApplication::translate("MainWindow", "\320\236\320\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
