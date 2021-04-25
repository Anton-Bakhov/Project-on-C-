#pragma once

using namespace std; 

class Item
{
public:

	Item();
	Item(int, string, date);

	void SetupDateNameOfProduct(string name);
	void SetupDateNumbOfProduct(int numb);
	void SetupDate(date d);

	string GetNameOfProduct();
	int GetNumbOfProduct();
	
	void printItemInfo();

	friend ostream& operator <<(ostream& ost, Item& item);
private:
	int numbOfProduct;
	string nameOfProduct;
	date d;
};