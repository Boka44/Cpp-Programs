/******************************************************************************

Largest/Smallest Array Values
Write a program that lets the user enter 10 values into an array. The program should
then display the largest and smallest values stored in the array.

*******************************************************************************/
#include <iostream>
using namespace std;


int main()
{
    int numArr[9],
    max = numArr[0], 
    min = numArr[0],
    temp;
    
    cout << "Enter 10 numbers into the program:\n\n";
    for (int i; i < 10; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> numArr[i];
        cout << endl;
    }  
    for (int i; i < 10; i++) {
        temp = numArr[i];
        if (max < temp) {
            max = temp;
        }
        if (min > temp) {
            min = temp;
        }
    }
    
    
    cout << "The highest number is: " << max << endl;
    cout << "The lowest number is: "<< min << endl;

    return 0;
}

