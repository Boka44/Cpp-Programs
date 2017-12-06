/*1- A painting company has determined that for every 220 square feet of wall space,
one gallon of paint and eight hours of labor will be required. The company charges
$35.00 per hour for labor. Write a modular program that allows the user to enter
the number of rooms that are to be painted and the price of the paint per gallon. It
should also ask for the square feet of wall space in each room. It should then display
the following data:
• The number of gallons of paint required
• The hours of labor required
• The cost of the paint
• The labor charges
• The total cost of the paint job
Input validation: Do not accept a value less than 1 for the number of rooms. Do not
accept a value less than $10.00 for the price of paint. Do not accept a negative value
for square footage of wall space.*/


#include <iostream>
#include <iomanip>
#include <string>
using namespace std; 

void midterm_1(){
    double laborPerHour = 35,
    wallSpaceStatic = 220,
    laborStatic = 8,
    roomsTemp, laborCost, totalcost, paintCost, paintGallons, labor, paintTotalCost;
    int wallSpaceTemp, rooms,
    wallSpaceTotal = 0;
    
    
    do {
        cout << "Enter the number of rooms to be painted: \n";
        cin >> rooms;
        
        if (rooms < 1) 
            cout << "You have to enter at least 1 room!\nTry again." << endl;
        
    } while (rooms < 1); 
    do {
        cout << "How much will the paint cost per gallon? \n";
        cin >> paintCost;
        if (paintCost < 10) 
            cout << "Paint doesn't cost less than $10.00!\nTry again." << endl;
        
    } while (paintCost < 10); 
    
    for(roomsTemp = 0; roomsTemp <rooms; roomsTemp++){
        cout << "Enter the square foot of wall space for room " << (roomsTemp + 1) << ": \n";
        do {
            cin >> wallSpaceTemp;
            
            if (wallSpaceTemp < 0) 
                cout << "You can't enter negative space!\nTry again." << endl;
            
        } while (wallSpaceTemp < 0); 
        
        
        wallSpaceTotal += wallSpaceTemp;
        
    }
    
    paintGallons = wallSpaceTotal / wallSpaceStatic;
    paintTotalCost = paintCost * paintGallons;
    labor = paintGallons * laborStatic;
    laborCost = labor * laborPerHour;
    totalcost = laborCost + paintTotalCost;
    
    cout << "\n\nTotal gallons of paint required: " << paintGallons << "." << endl;
    cout << "Total hours of labor required: "<< labor << "." << endl;
    cout << setprecision(2) << fixed << showpoint;
    cout << "Total cost of labor: $" << laborCost << "." << endl;
    cout << "Total cost of paint: $" << paintTotalCost << "." << endl << endl;
    cout << "The total cost of the project is $" << totalcost << "." << endl;
};



int main()
{
    midterm_1();
    
    return 0;
}

