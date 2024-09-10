//Exercise 1:
//	A user wants to buy a t-shirt from a store. 
//	The user enters the prices of the items and the quantity of each item.
//	
//	Write a c++ code to calculate the final amount to be paid after a sales tax of 10% applied.  
//
//	Requirements
//	Input	: price, tax
//	Output	: final amount

#include <iostream>
using namespace std;

int main(){
    double price, tax, discount ,total, final;
    // price = 100;
    // tax = 0.10;
    cout << "Please enter the price: ";
    cin >> price;
    cout << "Please enter the tax: ";
    cin >> tax;
    cout << endl;
    discount = 0.3;
    total = price - (discount * price);
    final = total + tax * total;
    cout << "Price: "<< "$" << price <<endl;
    cout << "Tax: " << tax*100 << "%" << endl;
    cout << "The final amount is: " << "$" <<final; 
    return 0;
}