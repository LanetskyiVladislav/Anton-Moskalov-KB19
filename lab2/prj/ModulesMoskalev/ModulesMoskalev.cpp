#include "ModulesMoskalev.h"
#include <cstdlib>
#include <math.h>

using namespace std;

double q_calculation(double x, double y, double z)
{
  double a,b,c = 0;
  a = x+y;
  a = cos(a);  // ������ ����� � ���������� �.
  b = fabs(x);
  c = pow(z,b);
  b = sqrt(c);  // ������ ����� � ���������� �.
  c = pow(x,y);
  c = 3.14*c;
  c = sqrt(c);  // ������ ����� � ���������� �.
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
  a=a/b;       // ������ ����� � ���������� �.
  b=pow(y,5);
  c=3*b;        // ������ ����� � ���������� �.
  return round(a+c);
}
