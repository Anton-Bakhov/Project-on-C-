#include <string>
#include "date.h"
#include "Item.hpp"
#include "product.hpp"
#include "ShopProductInfo.hpp"
#include "fstream"

using namespace std;

void ShopProductInfo::printAllItemInfo(product& prod,Item& item)
{
	std::ofstream out;
	out.open("BillPrinting.html");
	if (out.is_open())
	{
		out << "<html> " << "\n" << "<body>" << "\n";

		out <<"<h2> "<<"'" <<" Your Bill "<< "'"<< " </h2> "<<"\n"<< "<p>" <<"Price of product: " <<prod.endPrice() <<"$ "<< "<br>"<<" \n"<< "Product #: " << item.GetNumbOfProduct()<< "<br>" << "\n"
			<< "Name of Product: " << item.GetNameOfProduct() << "\n"<<"</p>" << std::endl;
	
		out << " </html> " << "\n" << "</body>" << "\n";
	}
	out.close();
}
