
/*2- Write a nested loops program that collect, calculate , and display the average lung cancer rate 
over a period of years. The user will be asked to enter the number of years.
The outer loop will iterate once for every year. The inner loop will iterate 12 times, once for each month. 
Each iteration of the inner loop will ask the user for the number of cancer cases
for that month. After all iterations, the program should display the number of months, 
the total number of lung cancer cases, and the average lung cancer cases per month for the 
entire period. Input Validation: Do not allow negative numbers for the monthly lung cancer cases.*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std; 



void midterm_2() {
    
    int years, yearsTemp, monthsTemp, cancerCasesTemp, monthsTotal;
    double average;
    int cancerCasesTotalTemp = 0;
    
    cout << "This program collects data and calculates the \n";
    cout << "average lung cancer rate over a period of years.\n\n";
    cout << "Enter the number of years: " << endl;
    cin >> years;
    for (yearsTemp = 0; yearsTemp < years; yearsTemp++) {
        
        cout << "\nYear " << (yearsTemp + 1) << ":\n";
        
        for(monthsTemp = 0; monthsTemp < 12; monthsTemp++){
            do {
                cout << "Enter the number of cancer cases for month " << (monthsTemp + 1) << ":\n";
                cin >> cancerCasesTemp;
                if (cancerCasesTemp < 0)
                    cout << "Cannot be negeative!\nTry again!" << endl;
            } while (cancerCasesTemp <0);
            
            cancerCasesTotalTemp += cancerCasesTemp;
            
        }
        
    }
    monthsTotal = years * 12;
    average = cancerCasesTotalTemp / monthsTotal;
        
    cout << "Total number of months: " << monthsTotal << endl;
    cout << "Total number of cancer cases: " << cancerCasesTotalTemp << endl;
    cout << "Average number of cases per month: " << average << endl;
    
}


int main()
{
    
    midterm_2();
    
    return 0;
}










