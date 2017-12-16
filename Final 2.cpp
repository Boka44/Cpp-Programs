/******************************************************************************
Imagine you own a company and you want to develop an electronic system for your customers
to browse inventory and purchase items you have in stock. Your inventory is kept in a text file
and may include some items that are on sale. Your customers can browse your inventory,
add items to their cart, and check out when they are done. They will get a receipt with
the items they purchased and their total amount.

*******************************************************************************/
#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
int menu();
int inv();
void addToCart(int);
void viewCart();
void goodbye();

//object for users cart
class Cart {
public:
	vector <double> prices;
	vector <string> items;
};

Cart newCart;


	

int main()
{
	
	menu();
	
	return 0;
}

void addToCart(int userChoice) {
	switch (userChoice) {
	case 1: newCart.prices.push_back(2.99);
		newCart.items.push_back("Orange");
			break;
	case 2: newCart.prices.push_back(3.99);
		newCart.items.push_back("Grapes");
		break;
	case 3: newCart.prices.push_back(4.99);
		newCart.items.push_back("Pineapple");
		break;
	case 4: newCart.prices.push_back(4.49);
		newCart.items.push_back("Watermelon");
		break;
	case 5: newCart.prices.push_back(9.99);
		newCart.items.push_back("Beer");
		break;
	case 6: newCart.prices.push_back(3.99);
		newCart.items.push_back("Chips");
		break;
	case 7: newCart.prices.push_back(2.99);
		newCart.items.push_back("Onion Dip");
		break;
	}
	menu();
}
//main menu
int menu() {
	int userInt;
	int userChoice;

	cout << "\nWelcome to the store!" << endl << endl;
	cout << "Items in the cart: " << newCart.items.size() << "." << endl << endl;
	cout << "If you'd like to see our inventory and order an item, press 1 and hit enter." << endl;
	cout << "To view your cart and receipt, press 2 and hit enter.\n" << endl;
	cin >> userInt;

	switch (userInt) {
	case 1: userChoice = inv();
		addToCart(userChoice);
		break;
	case 2: viewCart();
		break;
	};


	return 0;
}
//read file for inventory
int inv() {

	int item;
	fstream textFile; //File stream object
	string inventory; //to hold the file input


					  //opens the file in input mode
	textFile.open("InventoryList.txt", ios::in);

	//checks to make sure file is opened
	if (textFile) {

		//reads line from file
		getline(textFile, inventory);
		while (textFile) {

			//displays the last item read
			cout << inventory << endl;
			/*textFile >> newCart.items;
			textFile >> newCart.prices;*/


			//reads the next item
			getline(textFile, inventory);
		}

		//close the file
		textFile.close();
	}
	else {
		cout << "ERROR: Cannot open file.\n";
	};
	do {
		cout << "\nType in the number of the item that you would like to purchase and press enter." << endl << endl;
		cin >> item;
		if (item < 1 || item > 7)
			cout << "You must enter a number between 1 and 7!" << endl;
	} while (item < 1 || item > 7);
	return item;
}


//displays cart info
void viewCart() {
	int max = newCart.items.size();
	double total = 0;
	int temp;

	cout << "\nHere is your cart: " << endl << endl;
	for (int i = 0; i < max; i++) {
	cout << (i + 1) << ": " << newCart.items[i] << " $" << newCart.prices[i] << endl;
	total += newCart.prices[i];
	}
	cout << "\nTotal: ";
	cout << setprecision(2) << fixed << showpoint;
	cout << "$" << total << endl << endl;
	
	cout << "Type 0 then hit enter to return to menu." << endl;
	cout << "Type 1 to print receipt." << endl;
	cin >> temp;
	if (temp == 0) {
		menu();
		
	}
	else if (temp == 1) {
		goodbye();
	}
	
}

void goodbye() {
	cout << "Receipt printed! Thank you and come again!";
}
