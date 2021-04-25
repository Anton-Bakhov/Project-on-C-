#pragma once
class product
{
private:
	double tax, price;

public:
	product();
	product(double, double);

	void setTax(double);
	void setPrice(double);

	double getTax();
	double getPrice();

	double endPrice();

	
};

