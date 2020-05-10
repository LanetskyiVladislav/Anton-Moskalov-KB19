#include <iostream>
#include <cstdlib>
#include "ModulesMoskalev.h"

using namespace std;

int main()
{

    // Task1
    int Ans1[10] = {0,0,-32762,-64,-1393,-17,206,-565035,2,97};
    int Qs1[10][3] = { {1,1,1}, {2,3,5}, {15,1,4}, {3,2,17}, {9,1,5}, {6,2,3}, {5,6,3}, {7,2,44}, {1,99,1}, {5,5,1} };
    short i = 0;
    for (i=0; i<10; i++)
    {
       if ((q_calculation(Qs1[i][0],Qs1[i][1],Qs1[i][2]) == Ans1[i]))
       {
           cout << "Test #" << i << " is completed."<<endl;
           cout << "Input - "<<Qs1[i][0]<<", "<<Qs1[i][1]<<", "<<Qs1[i][2]<<". Output - "<<q_calculation(Qs1[i][0],Qs1[i][1],Qs1[i][2])<<endl;
       }
       if ((q_calculation(Qs1[i][0],Qs1[i][1],Qs1[i][2]) != Ans1[i]))
       {
           cout << "Test #" << i << " is NOT completed."<<endl;
           cout << "Input - "<<Qs1[i][0]<<", "<<Qs1[i][1]<<", "<<Qs1[i][2]<<". Output - "<<q_calculation(Qs1[i][0],Qs1[i][1],Qs1[i][2])<<endl;
           exit;
       }
    }
    system("pause");


    // Task2
    int Ans2[10] = {4,730,4,96,4,96,23327,96,3,9374};
    int Qs2[10][3] = { {1,1,1}, {2,3,5}, {15,1,4}, {3,2,17}, {9,1,5}, {6,2,3}, {5,6,3}, {7,2,44}, {44,1,1}, {5,5,1} };
    for (i=0; i<10; i++)
    {
       if ((s_calculation(Qs2[i][0],Qs2[i][1],Qs2[i][2]) == Ans2[i]))
       {
           cout << "Test #" << i << " is completed."<<endl;
           cout << "Input - "<<Qs2[i][0]<<", "<<Qs2[i][1]<<", "<<Qs2[i][2]<<". Output - "<<s_calculation(Qs2[i][0],Qs2[i][1],Qs2[i][2])<<endl;
       }
       if ((s_calculation(Qs2[i][0],Qs2[i][1],Qs2[i][2]) != Ans2[i]))
       {
           cout << "Test #" << i << " is NOT completed."<<endl;
           cout << "Input - "<<Qs2[i][0]<<", "<<Qs2[i][1]<<", "<<Qs2[i][2]<<". Output - "<<s_calculation(Qs2[i][0],Qs2[i][1],Qs2[i][2])<<endl;
           exit;
       }
    }
    system("pause");
    return(0);
}
