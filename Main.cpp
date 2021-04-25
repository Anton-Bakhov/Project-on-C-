#include <iostream>
#include "date.h"
#include "product.hpp"
#include "Item.hpp"
#include "ShopProductInfo.hpp"
using namespace std;

int main()
{
	Item a(1, "Milk.0.5", {12,2,2014});

	cout << a;

	ShopProductInfo ad;

	product Aroj(0.20,100.99);

	ad.printAllItemInfo(Aroj,a);

	return 0;
}