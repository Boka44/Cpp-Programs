// Write a program that determines which of a company’s four divisions (Northeast,
// Southeast, Northwest, and Southwest) had the greatest sales for a quarter.
// Input Validation: Do not accept dollar amounts less than $0.00



#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double getSales(string division) {
    double Sales;

	do {
		cout << "What is the " << division;
    	cout << " division's quarterly sales figure? ";
    	cin  >> Sales;

    	if (Sales < 0.00)
    	cout << "Dollar amount must be greater than $0.00\n";

    } while (!(Sales > 0.00));
    return Sales;
    
}

void findHighest(double Northwest, double Northeast, double Southwest, double Southeast) {
    double Winner;
    
    cout << "The winner is the ";
    
    if (Northeast > Northwest && Northeast > Southeast && Northeast > Southwest) {
        Winner = Northeast;
        cout << "Northeast";
    } else if (Northwest > Northeast && Northwest > Southeast && Northwest > Southwest) {
        Winner = Northwest;
        cout << "Northwest";
    } else if (Southeast > Northwest && Southeast > Northeast && Southeast > Southwest) {
        Winner = Southeast;
        cout << "Southeast";
    } else {
        Winner = Southwest;
        cout << "Southwest";
    }
    
    cout << setprecision(2) << fixed << showpoint;
    cout << " division with $" << Winner << " in sales!" << endl;
    
}




int main()
{
    double Northeast, Southeast, Northwest, Southwest;
    
    cout << setprecision(2) << fixed << showpoint;
    cout << "Enter the quarterly sales for each division." << endl;
    
    Northeast = getSales("Northeast");
    Northwest = getSales("Northwest");
    Southeast = getSales("Southeast");
    Southwest = getSales("Southwest");
    
    findHighest(Northwest, Northeast, Southwest, Southeast);
    
    return 0;
}





