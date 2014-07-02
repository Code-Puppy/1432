#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

int main ()
{
	char address[50];
	char name[35];	
	int item, quantity, junk;
	double price;
	
	const int SIZE =6;
	int VALID_ITEM[SIZE] = {106, 108, 307, 405, 457, 688};                                 
	int VALID_ITEM_PRICE[SIZE] = {0.59, 0.99, 4.50, 15.99, 17.50, 39.00}; 

	bool foundIt = false;
	string MSG_YES = "Item is found";
	string MSG_NO = "Item not found";
	
	cout << "Hello, what name is the account under? "; 
	cin.getline(name, 35);
	cout << endl;
	cout << "What is the address for this account? ";
	cin.getline(address, 50);
	cout << endl;
	cout << "what item do you wish to purchase? ";
	cin >> item;    //you should probably do some validation here ... and the questions should be inside of a loop? no?
	cout << endl;
	cout << "How many of item# " << item << " do you want?  ";
	cin >> quantity;
	cout << endl << endl;

	int i=0;
	while (i < SIZE) {
		if (item == VALID_ITEM[i]) 
			foundIt = true;
			price = VALID_ITEM_PRICE[i];  // times quantity ? if * choose 2 AND I chose 688->39.00 I should get ______? Bug?
      //i=i+1; // your iteration was out side the loop therefore it was infinite
      i++; //be cooler mang
	} 
	cout << "price is: " << price << endl;

	
  
//  cin >> junk;
//system("pause"); //this is a terrible idea use cin >> some_junk_var .... 
                   //system is specific to the OS and is a bad approach overall ... I use em all the time ... but only cause
                   //I'm a Ninja
  return 0;    //keep your indents proper mang
}
