#include "ModulesMoskalev.h"
#include <cstdlib>
#include <math.h>
#include <string>

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
int WaterHeight(float x)
{
   if (x==0) {return 0;}
   if (x>0 && x<=0.1)    {return 1;}
   if (x>0.1 && x<=0.5)  {return 2;}
   if (x>0.5 && x<=1.25) {return 3;}
   if (x>1.25 && x<=2.5) {return 4;}
   if (x>2.5 && x<=4)    {return 5;}
   if (x>4 && x<=6)      {return 6;}
   if (x>6 && x<=9)      {return 7;}
   if (x>9 && x<=14)     {return 8;}
   if (x>14)             {return 9;}
}

float ForToCels(float x)
{
float a;
a = x-32;
a = a/9;
a = a*5;
return a;
}

string zadacha33(int x){
string dvoich;
do{
   dvoich = char('0'+ (x%2)) + dvoich;
   x=x/2;
  } while(x>0);
int i;
int countresult = 0;
if (dvoich[1] == '0') {
    for (i=0; i<dvoich.length();i++) {
      if (dvoich[i] == '0') {countresult = countresult + 1;}
    }
dvoich = "N" + to_string(countresult);
}
if (dvoich[1] == '1') {
    for (i=0; i<dvoich.length();i++) {
      if (dvoich[i] == '1') {countresult = countresult + 1;}
    }
dvoich = "O" + to_string(countresult);
}
return dvoich;
}
