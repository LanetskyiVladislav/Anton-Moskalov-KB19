#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
#include <sstream>
#include <ModulesMoskalev.h>
#include <stdio.h>


using namespace std;


string Zad231(){                            // ������ 2.3.1
string ABC;
ABC = '\n';
ABC = ABC + "��������� �� - ��������� �����" + " " +char(169);
return ABC;
}


bool Zad232(char a,char b)                  // ������ 2.3.2
{
    return(a+1<b+3);
}



string CouToOct(double ch){                 // ����� � ����. �������
    stringstream ss;
    string str1, str2;
    if(ch<0){
        ch*=(-1);
        str2="-";
    }
    int i1=floor(ch);
    ss<<oct<<i1;
    ss>>str1;
    str2+=str1;
    string str3;
    if(ch==floor(ch)){
        return str2;
    }else{
        str3=str3 + (to_string(ch-floor(ch)));
    }
    str2+='.';
    for(short i2=0;i2<2; i2++){
        ss.clear();
        i1=floor(stod(str3)*8);
        str3 = to_string(stod(str3)*8-i1);
        ss<<oct<<i1;
        ss>>str1;
        str2+=str1;
    }
    return str2;
}




string Zad233(float x, float y, float z) {          // ������ 2.3.3
string CC;

int a = s_calculation(x,y,z);
stringstream ss;
ss << a;
string answer = "s_calculation: " + ss.str();
answer = answer + '\n';
a = q_calculation(x,y,z);
ss.str().resize(0);
ss.str().clear();
ss.str("");
ss << a;
answer = answer+"q_calculation: "+ss.str();
answer = answer+'\n'+"Oct(x): "+CouToOct(x)+'\n'+"Oct(y): "+CouToOct(y)+'\n'+"Oct(z): " + CouToOct(z);
answer = answer+'\n'+"Dec(x): "+to_string(x)+'\n'+"Dec(y): "+to_string(y)+'\n'+"Dec(z): "+to_string(z);


return answer;
}



string ValidCh(string X) {              // ��������� �����.
bool znak = false;
string chisla = "0123456789,.";
for (short i=0; i<X.length(); i++){
    if (chisla.find(X[i]) == -1) {return "N";}
}
for (short i=0; i<X.length(); i++){
    if (X[i] == ',') {X[i] = '.';}
}
for (short i=0; i<X.length(); i++){
    if (X[i] == '.' && znak == true) {return "N";}
    if (X[i] == '.' && znak == false) {znak = true;}
}
if (X[0] == '.' || X[X.length()-1] == '.') {return "N";}
return X;
}

int main()
{
string xs,ys,zs;
float x,y,z;
string a,b;
char ConfirmS[53] = "ABCDEFGHIJKLMNOPQRSTUVYXYZabcdefghijklmnopqrstuvwxyz";
short i=0;
setlocale(LC_ALL, "Ukrainian");
cout << "----== ����������� ������ 2 ==----" << endl;
Start_Input_A:
cout << "������� A: ";
cin >> a;                           // INPUT A
if (a.length() != 1) {
    cout << "�i�i� ������i� - 1 ������." << endl;
    goto Start_Input_A;
}
for (i=0; i<53; i++){
    if (a[0]==ConfirmS[i]){ break; }
    if (a[0]!=ConfirmS[52] && i==52) {
        cout << "�������. ���������� �i������ ������i�: A - z" << endl;
        goto Start_Input_A;
    }
}


Start_Input_B:                      // INPUT B
cout << endl << "������� B: ";
cin >> b;
if (b.length() != 1) {
    cout << "�i�i� ������i� - 1 ������." << endl;
    goto Start_Input_B;
}
for (i=0; i<53; i++){
    if (b[0]==ConfirmS[i]){ break; }
    if (b[0]!=ConfirmS[52] && i==52) {
        cout << "�������. ���������� �i������ ������i�: A - z" << endl;
        goto Start_Input_B;
    }
}

Start_Input_X:
do{
cout << endl << "������� X: ";
cin >> xs;
if (ValidCh(xs) == "N") {cout << "���������� �����!";}
} while (ValidCh(xs) == "N");
istringstream(ValidCh(xs)) >> x;
if (x<1 || x>100) {cout << "���������� �i������: 1-100!"; goto Start_Input_X;}

Start_Input_Y:
do{
cout << endl << "������� Y: ";
cin >> ys;
if (ValidCh(ys) == "N") {cout << "���������� �����!";}
} while (ValidCh(ys) == "N");
istringstream(ValidCh(ys)) >> y;
if (y<1 || y>100) {cout << "���������� �i������: 1-100!"; goto Start_Input_Y;}

Start_Input_Z:
do{
cout << endl << "������� Z: ";
cin >> zs;
if (ValidCh(zs) == "N") {cout << "���������� �����!";}
} while (ValidCh(zs) == "N");
istringstream(ValidCh(zs)) >> z;
if (z<1 || z>100) {cout << "���������� �i������: 1-100!"; goto Start_Input_Z;}

MenuV:
cout << '\n' << '\n' << '\n' << '\n' << "����i�� ������ �i�: " << endl;
cout << "1. ������ 2.3.1." << '\n' << "2. ������ 2.3.2." << '\n' << "3. ������ 2.3.3." << '\n' << "Q. ���i�." << '\n' << "���i���: ";
string menu1;
cin >> menu1;
if (menu1.length() != 1) {cout << "����i�� ��������� ���i���!"; goto MenuV;}
cout << '\n' << '\n' << '\n' << '\n' << '\n' << '\n';
switch (menu1[0]) {
case '1':
    cout << "������ 2.3.1: " << Zad231() << endl; break;
case '2':
    cout << "������ 2.3.2: " << '\n' << a << "+1<" << b << "+3: " << Zad232(a[0],b[0]) << endl; break;
case '3':
    cout << "������ 2.3.3: " << endl << Zad233(x,y,z) << endl; break;
case 'Q':
    return 0; break;
case 'q':
    return 0; break;
default:
    cout << "����i�� ��������� ���i���!"; goto MenuV; break;
}


ExitLabel:
string ExitPoint;
cout << "������ ��������� ��������� ��?" << '\n' << "Y/N: ";
cin >> ExitPoint;
if (ExitPoint.length() != 1) {cout << "����i�� ��������� ���i���!"; goto ExitLabel;}
switch (ExitPoint[0]) {
case 'Y':
    goto Start_Input_A; break;
case 'y':
    goto Start_Input_A; break;
case 'N':
    return 0; break;
case 'n':
    return 0; break;
default:
    cout << "����i�� ��������� ���i���!"; goto ExitLabel; break;
}
return(0);
}
