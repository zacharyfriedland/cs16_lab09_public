//inventory.h
#ifndef INVENTORY_H
#define INVENTORY_H
#include <string>
#include <iostream>

using namespace std;

struct Product{
	string title;
	string manufacturer;
	int quantity;
	double price;
};

void printItems(Product item);

void updateList(Product* list, string *choices);

#endif

