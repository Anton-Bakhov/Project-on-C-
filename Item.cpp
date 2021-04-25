#include <string>
#include "date.h"
#include "Item.hpp"
#include <iostream>

Item::Item() : nameOfProduct(" "), numbOfProduct(0), d(0,0,0) {};
Item::Item(int numbOfProduct, string nameOfProduct, date d) : numbOfProduct(numbOfProduct), nameOfProduct(nameOfProduct), d(d) {};

void Item::SetupDateNameOfProduct(string name)
{
	nameOfProduct = name;
}

void Item::SetupDateNumbOfProduct(int numb)
{
	numbOfProduct = numb;
}

void Item::SetupDate(date d)
{
	this->d = d;
}

string Item::GetNameOfProduct()
{
	return nameOfProduct;
}

int Item::GetNumbOfProduct()
{
	return numbOfProduct;
}

void Item::printItemInfo()
{
	cout << "Product #: " << GetNumbOfProduct() << "\n" << "Name of Product: " << GetNameOfProduct() << "\n" << "Date of adding the product: " <<
	d.mm<<"/"<<d.dd<<"/"<<d.yy<<"\n";

}

ostream& operator<<(ostream& ost, Item& item)
{
	ost <<"Number of Product: "<<item.numbOfProduct << "\n" <<"Name of Product: "<<item.nameOfProduct << "\n" 
		<<"Date of adding the item <MM/DD/YY>: "<< item.d.mm <<"/"<<item.d.dd<<"/" <<item.d.yy<< "\n";

		return ost;
}
