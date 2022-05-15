#include "ShoppingCart.h"

ShoppingCart::ShoppingCart()
{
	(*this).payMethod = "-";
}

ShoppingCart::ShoppingCart(const string &payMethod)
{
	(*this).payMethod=payMethod;
}

string &ShoppingCart::getPayMethod()
{
	return payMethod;
}

void ShoppingCart::setPayMethod(const string &payMethod)
{
	(*this).payMethod=payMethod;
}

void ShoppingCart::addProduct(int id, int quantity)
{
	shoppingCart[id]=quantity;
}

void ShoppingCart::raiseQuantity(int id, int quantity)
{
	shoppingCart[id]+=quantity;
}

void ShoppingCart::lowerQuantity(int id, int quantity)
{
	shoppingCart[id]-=quantity;
}

int ShoppingCart::getQuantity(int productID)
{
	map<int, int>::iterator i;
	i=shoppingCart.find(productID);
	if(i==shoppingCart.end())
		return -1;
	else 
		return i->second;
}

void ShoppingCart::deleteProduct(int productID)
{
	map<int, int>::iterator i;
	i=shoppingCart.find(productID);
	shoppingCart.erase(i);
}

map<int, int> &ShoppingCart::getShoppingCart()
{
	return shoppingCart;
}

void ShoppingCart::displayShoppingCart()
{
	throw("undefined");
}

json ShoppingCart::toJSON()
{
  return json(*this);
}