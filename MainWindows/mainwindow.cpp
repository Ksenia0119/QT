#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "resistance.h"
#include <string>
#include <iostream>
#include <QMessageBox>

/// Конструктор
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
/// Деструктор
MainWindow::~MainWindow()
{
    delete ui;
}

/// Функция класса MainWindow к кнопке pushButton_calc_clicked

void MainWindow::on_pushButton_Calc_clicked()
{
//    /// Преобразования типа в Float
//    float r1 = ui->lineEdit_r1->text().toFloat();
//    float r2 = ui->lineEdit_r2->text().toFloat();
//    float r3 = ui->lineEdit_r3->text().toFloat();
//     /// Вызов функции
//    float a=sum_res(r1,r2,r3);
//    /// Вывод результата на label с помощью метки текста в класс QString который возвращает number
//    ui->label_result->setText(QString::number(a));
    try{
    ///Задать цвет lineEdit
    ui->lineEdit_r1->setStyleSheet("background-color: white");
    ui->lineEdit_r2->setStyleSheet("background-color: white");
    ui->lineEdit_r3->setStyleSheet("background-color: white");
    ///Считать значения с lineEdit
    r.set_r1(ui->lineEdit_r1->text().toDouble());
    r.set_r2(ui->lineEdit_r2->text().toDouble());
    r.set_r3(ui->lineEdit_r3->text().toDouble());
    ///Вычисление суммы параллельного сопротивления 3х резисторов
    r.R_calc();
    ///Записать результат в label,plainTextEdit
    ui->label_result->setText(QString::number(r.R_calc()));
    ui->plainTextEdit_allresult->appendPlainText("При r1 = " + QString::number(r.get_r1()) + "," + " r2 = " + QString::number(r.get_r2()) + "," + " r3 = " + QString::number(r.get_r3()));

    ui->plainTextEdit_allresult->appendPlainText("R = " + QString::number(r.R_calc()));
    ///Поймать исключения и закрасить соответствующее поле ввода в красный цвет
    }catch ( const std::invalid_argument& e ) {
        if (ui->lineEdit_r1->text().toDouble() <= 0) {
            ui->lineEdit_r1->setStyleSheet("background-color: #F08080"); }

        if (ui->lineEdit_r2->text().toDouble() <= 0) {
            ui->lineEdit_r2->setStyleSheet("background-color: #F08080"); }

        if (ui->lineEdit_r3->text().toDouble() <= 0){
            ui->lineEdit_r3->setStyleSheet("background-color: #F08080");}
}
}
///Кнопка меню - очистить
void MainWindow::on_action_triggered()
{
   ui->plainTextEdit_allresult->clear();
}

///Кнопка меню - об авторе
void MainWindow::on_action_1_triggered()
{
    QMessageBox::about(this, "Об авторе", " @author Maltseva K.V.");
}

