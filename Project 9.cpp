/*Write a function that returns an integer and accepts a pointer to a C-string as an

argument. The function should count the number of characters in the string and return that
number. Demonstrate the function in a simple program that asks the user to input a
string, passes it to the function, and then displays the function’s return value.*/

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

char cstring[256];

int charFunction(char *cstring) {
    return strlen(cstring);
}

int main()
{
    cout << "Enter a string: \n";
    cin.getline(cstring, 256);
    cout << endl;
    cout << "The length is: " << charFunction(cstring) << endl;

    return 0;
}
