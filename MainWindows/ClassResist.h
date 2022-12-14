#ifndef CLASSRESIST_H
#define CLASSRESIST_H
#include <stdexcept>
///Реализация класса параллельное сопротивление 3х резисторов
class Resist
{
private:
//Поля
double r1,r2,r3;
//Поле для хранения значения из функции
double R;
public:
///Конструктор без параметров
Resist();
///Задать r1
void set_r1(double r11);
///Задать r2
void set_r2(double r21);
///Задать r3
void set_r3(double r31);
///Вернуть r1
double get_r1()const;
///Вернуть r2
double get_r2()const;
///Вернуть r3
double get_r3()const;
///Посчитать параллельное сопротивление 3х резисторов
double R_calc();
};

#endif // CLASSRESIST_H
