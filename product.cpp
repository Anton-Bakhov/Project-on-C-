#include "product.hpp"
#include <iostream>

using namespace std;

product::product(): tax(0.0),price(0.0){}

product::product(double tax, double price):tax(tax),price(price){}

void product::setTax(double tax)
{
	this->tax = tax;
}

void product::setPrice(double price)
{
	this->price = price;
}

double product::getTax()
{
	return tax;
}

double product::getPrice()
{
	return price;
}

double product::endPrice()
{ 
	double endprice=0.0;

	endprice = price + price * tax;

	return endprice;
}






