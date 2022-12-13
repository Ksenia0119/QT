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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_1;
    QAction *action;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QLabel *label_condition;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_R1;
    QLineEdit *lineEdit_r1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_R2;
    QLineEdit *lineEdit_r2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_R3;
    QLineEdit *lineEdit_r3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_Calc;
    QLabel *label_result;
    QLabel *label_result_2;
    QPlainTextEdit *plainTextEdit_allresult;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(602, 551);
        MainWindow->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"Segoe UI\";\n"
"background-color: rgb(204, 255, 247);"));
        action_1 = new QAction(MainWindow);
        action_1->setObjectName("action_1");
        action = new QAction(MainWindow);
        action->setObjectName("action");
        action->setEnabled(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        label_condition = new QLabel(centralwidget);
        label_condition->setObjectName("label_condition");
        label_condition->setMaximumSize(QSize(571, 31));
        label_condition->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));

        gridLayout_2->addWidget(label_condition, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_R1 = new QLabel(centralwidget);
        label_R1->setObjectName("label_R1");
        label_R1->setMaximumSize(QSize(27, 32));
        label_R1->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(label_R1);

        lineEdit_r1 = new QLineEdit(centralwidget);
        lineEdit_r1->setObjectName("lineEdit_r1");
        lineEdit_r1->setMaximumSize(QSize(228, 32));
        lineEdit_r1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(lineEdit_r1);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_R2 = new QLabel(centralwidget);
        label_R2->setObjectName("label_R2");
        label_R2->setMaximumSize(QSize(27, 32));
        label_R2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(label_R2);

        lineEdit_r2 = new QLineEdit(centralwidget);
        lineEdit_r2->setObjectName("lineEdit_r2");
        lineEdit_r2->setMaximumSize(QSize(228, 32));
        lineEdit_r2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(lineEdit_r2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_R3 = new QLabel(centralwidget);
        label_R3->setObjectName("label_R3");
        label_R3->setMaximumSize(QSize(27, 32));
        label_R3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_3->addWidget(label_R3);

        lineEdit_r3 = new QLineEdit(centralwidget);
        lineEdit_r3->setObjectName("lineEdit_r3");
        lineEdit_r3->setMinimumSize(QSize(149, 0));
        lineEdit_r3->setMaximumSize(QSize(228, 32));
        lineEdit_r3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(lineEdit_r3);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setMaximumSize(QSize(291, 461));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/file/image_1")));

        gridLayout->addWidget(label, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);


        verticalLayout_3->addLayout(verticalLayout_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        pushButton_Calc = new QPushButton(centralwidget);
        pushButton_Calc->setObjectName("pushButton_Calc");
        pushButton_Calc->setEnabled(true);
        pushButton_Calc->setMinimumSize(QSize(350, 50));
        pushButton_Calc->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_3->addWidget(pushButton_Calc, 0, 0, 1, 1);

        label_result = new QLabel(centralwidget);
        label_result->setObjectName("label_result");
        label_result->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 16pt \"Verdana\";"));

        gridLayout_3->addWidget(label_result, 1, 0, 1, 1, Qt::AlignRight);

        label_result_2 = new QLabel(centralwidget);
        label_result_2->setObjectName("label_result_2");
        label_result_2->setMaximumSize(QSize(80, 50));
        label_result_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 16pt \"Verdana\";"));

        gridLayout_3->addWidget(label_result_2, 1, 1, 1, 2, Qt::AlignLeft);


        verticalLayout_3->addLayout(gridLayout_3);

        plainTextEdit_allresult = new QPlainTextEdit(centralwidget);
        plainTextEdit_allresult->setObjectName("plainTextEdit_allresult");
        plainTextEdit_allresult->setMaximumSize(QSize(500, 16777215));
        plainTextEdit_allresult->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(plainTextEdit_allresult);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 602, 33));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(action);
        menu_2->addAction(action_1);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Resistance calculation", nullptr));
        action_1->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261 \320\260\320\262\321\202\320\276\321\200\320\265", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\262\321\201\320\265", nullptr));
        label_condition->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\207\320\265\321\202 \321\201\321\203\320\274\320\274\321\213 \320\277\320\260\321\200\320\260\320\273\320\273\320\265\320\273\321\214\320\275\320\276\320\263\320\276 \321\201\320\276\320\265\320\264\320\270\320\275\320\265\320\275\320\270\321\217 \321\200\320\265\320\267\320\270\321\201\321\202\320\276\321\200\320\276\320\262", nullptr));
        label_R1->setText(QCoreApplication::translate("MainWindow", "R1:", nullptr));
#if QT_CONFIG(statustip)
        lineEdit_r1->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        lineEdit_r1->setText(QCoreApplication::translate("MainWindow", "24", nullptr));
        label_R2->setText(QCoreApplication::translate("MainWindow", "R2:", nullptr));
        lineEdit_r2->setText(QCoreApplication::translate("MainWindow", "67", nullptr));
        label_R3->setText(QCoreApplication::translate("MainWindow", "R3:", nullptr));
        lineEdit_r3->setText(QCoreApplication::translate("MainWindow", "12", nullptr));
        label->setText(QString());
        pushButton_Calc->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\207\320\270\321\201\320\273\320\270\321\202\321\214", nullptr));
        label_result->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_result_2->setText(QCoreApplication::translate("MainWindow", "\320\236\320\274", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\230\320\275\321\201\321\202\321\200\321\203\320\274\320\265\320\275\321\202\321\213", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
