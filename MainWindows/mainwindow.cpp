#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "resistance.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_Calc_clicked()
{
    float r1 = ui->lineEdit_r1->text().toFloat();
    float r2 = ui->lineEdit_r2->text().toFloat();
    float r3 = ui->lineEdit_r3->text().toFloat();
    float a=sum_res(r1,r2,r3);
    ui->label_result->setText(QString::number(a));
}

