#ifndef CLASSRESIST_H
#define CLASSRESIST_H
#include <stdexcept>
class Resist
{
private:
double r1,r2,r3;
public:
Resist();
void set_r1(double r11);
void set_r2(double r21);
void set_r3(double r31);
double get_r1()const;
double get_r2()const;
double get_r3()const;
double R(double r1,double r2,double r3);
};

#endif // CLASSRESIST_H
