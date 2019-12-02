#include <iostream>
#include <string>
#include <vector>
#include "inventory.h"

using namespace std;

/*string* createCart(string* cart, size){
	strin cart;
	for(int i = 0; i < 10; i++){
		cart->title.push_back("white t-shirt");
	}
	return cart;
}*/


//void addToCart(){
//	if(stock == 0)



int main(){
	Product *items = new Product[3];
	items[0] = {"Shovel", "GrassShop", 5, 13.66};
	items[1] = {"Laptop", "Pear", 9, 1229.99};
	items[2] = {"T-Shirt", "SoftBrands", 25, 9.99};
	cout << "AVAILABLE PRODUCTS:" << endl;
	for(int i = 0; i < 3; i++){
		printItems(items[i]);	
	}
	cout << "What would you like to add to the cart?" << endl;
	cout << "Make sure spelling is precise, type one Product"
		<< " and press enter." << endl;
	string choice[3];
	int j = 0;
	while(j < 3){
		cin >> choice[j];
		j++;
	}
	cout << "\nYou selected: " << endl;
	for(auto z : choice){
		cout << z << endl;
	}
	cout << "UPDATED LIST: \n" << endl;
	updateList(items, choice);
	
}

void printItems(Product item){
	//print all parts of the Product
	cout << "\nTitle: " << item.title << endl;
	cout << "Manufacturer: " << item.manufacturer << endl;
	cout << "Quantity Remaining: " << item.quantity << endl;
	cout << "Price: " << item.price << endl;
	cout << "-------------------------------------------" << endl;
}

void updateList(Product* list, string *choices){
	//update quantity
	for(int i = 0; i < 3; i++){
		bool check = false;
		for(int j = 0; j < 3; j++){
			if(list[i].title == choices[j]){
				list[i].quantity--;
				check = true;
			}
		}
		if(check == false){
			cout << "One choice out of stock" << endl;
		}
		printItems(list[i]);
	}
	
}

