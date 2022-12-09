#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "resistance.h"

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
    /// Преобразования типа в Float
    float r1 = ui->lineEdit_r1->text().toFloat();
    float r2 = ui->lineEdit_r2->text().toFloat();
    float r3 = ui->lineEdit_r3->text().toFloat();
     /// Вызов функции
    float a=sum_res(r1,r2,r3);
    /// Вывод результата на label с помощью метки текста в класс QString который возвращает number
    ui->label_result->setText(QString::number(a));
}

