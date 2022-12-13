#include "ClassResist.h"
///Реализация класса сопротивление
Resist::Resist()
{

}
///Задать r1
void Resist::set_r1(double r11)
{
   if (r11 < 0) throw std::invalid_argument("r1 < 0");
r1=r11;
}
///Задать r2
void Resist::set_r2(double r21)
{if (r21 < 0) throw std::invalid_argument("r2 < 0");
r2=r21;
}
///Задать r3
void Resist::set_r3(double r31)
{if (r31 < 0) throw std::invalid_argument("r3 < 0");
r3=r31;
}
///Вернуть r1
double Resist::get_r1()const
{
return r1;
}
///Вернуть r2
double Resist::get_r2()const
{
return r2;
}
///Вернуть r3
double Resist::get_r3() const
{
return r3;
}
///Посчитать сопротивление
double Resist::R(double r1,double r2,double r3)
{
return 1/(1/r1+1/r2+1/r3);
}
