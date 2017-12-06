// Write a program with a loop that lets the user enter a series of integers. 
// The user should enter −99 to signal the end of the series. 
// After all the numbers have been entered, the program should display the largest 
// and smallest numbers entered.

#include <iostream>
using namespace std;

int main() {
    
    int greatest, smallest;
    int input = 0;
  
    while(input != -99){
        cout << "(Enter -99 to exit)" << endl;
        cout << "Enter a number:" << endl;
        cin >> input;
        if (input > greatest && input != -99) {
            greatest = input;
        } else if (input < smallest && input != -99) {
            smallest = input;
        }
    }
    
    cout << "The greatest value entered was " << greatest << endl;
    cout << "The smallest value entered was " << smallest << endl;

    
    return 0;
}