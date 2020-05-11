#include <iostream>
#include <ModulesMoskalev.h>
#include <string>
#include <cstdlib>
using namespace std;

int main(){
cout << "3.1 testing..." << '\n' << '\n' << '\n';
float InputArr1[10] = {0, 0.05, 0.4,1,1.25,2,3.5,5,7,47};
int OutputArr1[10] = {0,1,2,3,3,4,5,6,7,9};
short i;
for (i=0; i<10; i++){
if (WaterHeight(InputArr1[i]) == OutputArr1[i]){
    cout << "Test #" << i << '\n' << "Input:" << InputArr1[i] << '\n' << "Result:" << WaterHeight(InputArr1[i]) << '\n' << "Status: Passed." << endl;
    }
if (WaterHeight(InputArr1[i]) != OutputArr1[i]){
    cout << "Test #" << i << '\n' << "Input:" << InputArr1[i] << '\n' << "Result:" << WaterHeight(InputArr1[i]) << '\n' << "Status: Failed." << endl;
    }
}

cout << '\n' << '\n' << '\n' << "3.2 testing..." << '\n' << '\n' << '\n';
int InputArr2[10] = {32, 50, 77, -22, 122, 14, 5, 41, 59, 68};
int OutputArr2[10] = {0, 10, 25, -30, 50, -10, -15, 5, 15, 20};
for (i=0; i<10; i++){
if (ForToCels(InputArr2[i]) == OutputArr2[i]){
    cout << "Test #" << i << '\n' << "Input:" << InputArr2[i] << '\n' << "Result:" << ForToCels(InputArr2[i]) << '\n' << "Status: Passed." << endl;
    }
if (ForToCels(InputArr2[i]) != OutputArr2[i]){
    cout << "Test #" << i << '\n' << "Input:" << InputArr2[i] << '\n' << "Result:" << ForToCels(InputArr2[i]) << '\n' << "Status: Failed." << endl;
    }
}

cout << '\n' << '\n' << '\n' << "3.3 testing..." << '\n' << '\n' << '\n';
int InputArr3[10] = {11, 433, 332, 3222, 122, 14, 5, 41, 59, 68};
char OutputArr3_1[10] = {'O', 'O', 'N', 'O', 'O', 'O', 'O', 'N', 'O', 'N'};
int OutputArr3_2[10] = {'2', '5', '5', '6', '5', '3', '2', '3', '5', '5'};
for (i=0; i<10; i++){
if (zadacha33(InputArr3[i])[0] == OutputArr3_1[i] && zadacha33(InputArr3[i])[1] == OutputArr3_2[i]){
    cout << "Test #" << i << '\n' << "Input:" << InputArr3[i] << '\n' << "Result:" << zadacha33(InputArr3[i]) << '\n' << "Status: Passed." << endl;
    }
if (zadacha33(InputArr3[i])[0] != OutputArr3_1[i] || zadacha33(InputArr3[i])[1] != OutputArr3_2[i]){
    cout << "Test #" << i << '\n' << "Input:" << InputArr3[i] << '\n' << "Result:" << zadacha33(InputArr3[i]) << '\n' << "Status: Failed." << endl;
    }
}

system("pause");
return 0;
}
