#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <ModulesMoskalev.h>
#include <stdio.h>

using namespace std;


string ValidCh(string X) {
bool znak = false;
string chisla = "0123456789,.-";
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

for (short i=1; i<X.length(); i++){
    if (X[i] == '-') {return "N";}
}


return X;
}

void zad34j(){

string xs,ys,zs;
float x,y,z;


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
cout << "q_caluclation: " << q_calculation(x,y,z) << endl;
}

void zad34k(){

string xs,ys,zs;
float x,y,z;


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
cout << "s_caluclation: " << s_calculation(x,y,z) << endl;
}

void zad34z(){
string xs;
int x;
Start_Input_X:
do{
cout << '\n' <<"������� ������ ����i(�):";
cin >> xs;
if (ValidCh(xs) == "N") {cout << "���������� �����!";}
} while (ValidCh(xs) == "N");
istringstream(ValidCh(xs)) >> x;
if (x<0) {cout << "�������� �� ���� ���� ����� ����."; goto Start_Input_X;}
cout << "��� ���������� ����:" << WaterHeight(x) << endl;
}

void zad34x(){
string xs;
int x;
Start_Input_X:
do{
cout << '\n' <<"������� ����������� � �����������:";
cin >> xs;
if (ValidCh(xs) == "N") {cout << "���������� �����!";}
} while (ValidCh(xs) == "N");
istringstream(ValidCh(xs)) >> x;
if (x<-22 || x>122) {cout << "���������� �i������: -22 .. 122."; goto Start_Input_X;}
cout << "����������� � �����i��:" << ForToCels(x) << endl;
}

void zad34c(){
string xs;
int x;
Start_Input_X:
do{
cout << '\n' <<"������� �����:";
cin >> xs;
if (ValidCh(xs) == "N") {cout << "���������� �����!";}
} while (ValidCh(xs) == "N");
istringstream(ValidCh(xs)) >> x;
if (x<0 || x>65535) {cout << "���������� �i������: 0-65535"; goto Start_Input_X;}
int i;
int c;
if (zadacha33(x)[0] == 'N') {
    cout << "D1 = 0, �i���i��� ���i�: ";
    for (i=1; i<zadacha33(x).length(); i++){
    cout << zadacha33(x)[i];}
}
if (zadacha33(x)[0] == 'O') {
    cout << "D1 = 1, ���� �������: ";
    for (i=1; i<zadacha33(x).length(); i++){
    cout << zadacha33(x)[i];}
}
cout << '\n';
}

int main(){
setlocale(LC_ALL, "Ukrainian");

cout << " ----=== ����������� ������ 3. ===----"<< '\n';
MenuV:
cout << "����i�� ������ �i�: " << endl;
cout << "j - q_calculation." << '\n' << "k - s_calculation." << '\n' << "z - ������ 3.1." << '\n' << "x - ������ 3.2." << '\n' << "� - ������ 3.3." << '\n' <<"�i����i��:";
string menu1;
cin >> menu1;
if (menu1.length() != 1) {cout << "����i�� ��������� ���i���!"; goto MenuV;}
cout << '\n';
switch (menu1[0]) {
case 'j':
       zad34j(); break;
case 'k':
       zad34k(); break;
case 'z':
       zad34z(); break;
case 'x':
       zad34x(); break;
case 'c':
       zad34c(); break;
default:
    cout << '\a'; goto MenuV; break;
}
MenuE:
cout << "������ ��������� �����?" << '\n' << "v, V, A - ���i�. I����� - ������: ";
cin >> menu1;
if (menu1.length() != 1) {cout << "����i�� ��������� ���i���!"; goto MenuE;}
cout << '\n';
switch (menu1[0]) {
case 'v':
       return 0; break;
case 'V':
       return 0; break;
case 'A':
       return 0; break;
default:
    goto MenuV; break;
}
}
