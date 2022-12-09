// Защита от повторного включения
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

// Определение UI-класса наперёд, чтобы визуальное редактирование не приводило
// к крупным перекомпиляциям
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

// класс формы
class MainWindow : public QMainWindow
{
    // Макрос, который добавляет файл в компиляцию MOC’ом,
    // а также реализует пару функций
     Q_OBJECT

public:
      // Конструктор-деструктор.
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
// Слоты — фишка Qt, которая обрабатывается MOC’ом (обработчики событий)
private slots:
    void on_pushButton_Calc_clicked();

private:
     // Указатель на UI (для него в Qt есть ещё одна программа, UIC)
    Ui::MainWindow *ui;
      // Поля
    float r1,r2,r3;
};
// Защита от повторного включения
#endif // MAINWINDOW_H
