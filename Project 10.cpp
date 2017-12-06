// Design a class called Date . The class should store a date in three integers: month , day ,
// and year . There should be member functions to print the date in the following forms:
// 12/25/2014
// December 25, 2014
// 25 December 2014
// Demonstrate the class by writing a complete program implementing it.
// Input Validation: Do not accept values for the day greater than 31 or less than 1. 
// Do not accept values for the month greater than 12 or less than 1.



#include <iostream>
#include <string>
using namespace std;

string monthStr;

class Date {
    public:
        int date,
        month,
        year;
        static void print1(int, int, int);
        static void print2(int, string, int);
        static void print3(int, string, int);

};


string getMonth(int month) {
    switch (month) {
        case 1: monthStr = "January";
            break;
        case 2: monthStr = "February";
            break;
        case 3: monthStr = "March";
            break;
        case 4: monthStr = "April";
            break;
        case 5: monthStr = "May";
            break;
        case 6: monthStr = "June";
            break;
        case 7: monthStr = "July";
            break;
        case 8: monthStr = "August";
            break;
        case 9: monthStr = "September";
            break;
        case 10: monthStr = "October";
            break;
        case 11: monthStr = "November";
            break;
        case 12: monthStr = "December";
            break;
    }
    return monthStr;
};
    
void Date::print1(int date, int month, int year){
    cout << month << "/" << date << "/" << year << endl; 
};

void Date::print2(int date, string monthStr, int year){
    cout << monthStr << " " << date << ", " << year << endl; 
};

void Date::print3(int date, string monthStr, int year){
    cout <<  date << " " << monthStr << " " << year << endl; 
};
int main()
{   
    int date,
        month,
        year;
    
    Date dateObj;
    
    cout << "Hello! \nWelcome to the date app!" << endl;
    
    
    do {
        cout << "Enter a date starting with the day as a number: ";
        cin >> dateObj.date;
        if (dateObj.date < 1 || dateObj.date > 31) 
            cout << "Really? " << dateObj.date << "?!\nTry again." << endl;
        
    } while (dateObj.date < 1 || dateObj.date > 31); 
    cout << "Good!" << endl;
    do {
        cout << "Now enter the month as a number: ";
        cin >> dateObj.month;
        if (dateObj.month < 1 || dateObj.month > 12) 
            cout << dateObj.month << "?! Are you serious? \nTry again." << endl;
    } while (dateObj.month < 1 || dateObj.month > 12);
    
    string monthStr = getMonth(dateObj.month);

    cout << "\nFantastic! You entered " << monthStr << "!" << endl;
    cout << "Now enter the full four digit year: ";
    cin >> dateObj.year;
    cout << "\nThanks! Here is the date you entered in three formats:" << endl;
    
    dateObj.print1(dateObj.date, dateObj.month, dateObj.year);
    dateObj.print2(dateObj.date, monthStr, dateObj.year); 
    dateObj.print3(dateObj.date, monthStr, dateObj.year); 
    

    return 0;
}

