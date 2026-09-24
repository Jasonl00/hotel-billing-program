/* 
 Student: Jason Luis 
 02/18/2023 
 This program helps the user calculate the costs of a hotel resort stay to use when guests are booking a room. 
*/

#include <iostream>

using namespace std;

int main() {

	// The variable inputs 

	double priceofRooms, NumofRooms, days,subtotal, totaltax, tiptotal, total, alltotal;
	
	double tax = 0.14;

	double tip = 5.00;
	
	// Greeting of the Resort

	cout << "\nWelcome to Resort on the Beach!\n"; 

	cout << "\n*********************************************************\n ";

	//Get information about the stay
	
	cout << "\nInitial price per room: $";
		
	cin >> priceofRooms;
	
	cout << "\nEnter the number of rooms the guest will be occupying: ";

	cin >> NumofRooms; 

	cout << "\nEnter the number of days the guest will be staying for: ";

	cin >> days;

	// Calculate the total and tip cost 

	subtotal = priceofRooms * NumofRooms * days; 

	totaltax = subtotal * tax; 

	total = totaltax += subtotal; 

	tiptotal = tip * NumofRooms * days;

	alltotal = total += tiptotal;

	// Display the total of the stay all together

	cout << "\n*********************************************************\n ";

	cout << "\nYour subtotal bill before tax and gratuity is: $" << subtotal << endl;

	cout << "\nTax Rate @14%: " << tax << endl;

	cout << "\nRecommended gratuity @ $5 per day per room: $" << tiptotal << endl;

	cout << "\nYour total bill after tax is: $" << totaltax << endl;

	cout << "\nYour total bill comes to: $" << alltotal << endl;

	cout << "\n*********************************************************\n ";

	cout << "\nThank you for staying at the Resort!" << endl; 

	return 0;



	


	
}


