#include "ModulesMoskalev.h"
#include <cstdlib>
#include <math.h>

using namespace std;

double q_calculation(double x, double y, double z)
{
  double a,b,c = 0;
  a = x+y;
  a = cos(a);  // Первая часть в переменной А.
  b = fabs(x);
  c = pow(z,b);
  b = sqrt(c);  // Вторая часть в переменной Б.
  c = pow(x,y);
  c = 3.14*c;
  c = sqrt(c);  // Третья часть в переменной С.
  return round(a-b+c);
}
double s_calculation(double x, double y, double z)
{
  double a,b,c = 0;
  a=sin(x);
  b=y*z;
  c=x+y;
  b=b/c;
  b=fabs(b);
  b=sqrt(b);
  a=a/b;       // Первая часть в переменной А.
  b=pow(y,5);
  c=3*b;        // Вторая часть в переменной С.
  return round(a+c);
}
