#include "Address.h"

using namespace std;

Address::Address()
{
	county="";
	locality="";
	street="";
	number=0;
	block="";
	apartment=0;
}

Address::Address(const Address &address)
{
	county=address.county;
	locality=address.locality;
	street=address.street;
	number=address.number;
	block=address.block;
	apartment=address.apartment;
}

Address::Address(const string &jud, const string &loc, const string &str, int nr, const string &bl, int ap)
{
	(*this).county=jud;
	(*this).locality=loc;
	(*this).street=str;
	(*this).number=nr;
	(*this).block=bl;
	(*this).apartment=ap;
}

const Address &Address::operator=(const Address &adr)
{
	county=adr.county;
	locality=adr.locality;
	street=adr.street;
	number=adr.number;
	block=adr.block;
	apartment=adr.apartment;
	return *this;
}

void Address::setStrada(const string &str)
{
	(*this).street=str;
}

void Address::setNumber(int nr)
{
	(*this).number=nr;
}

void Address::setBlock(const string &bl)
{
	(*this).block=bl;
}

void Address::setApartment(int ap)
{
	(*this).apartment=ap;
}

void Address::setCounty(const string &jud)
{
	(*this).county=jud;
}

void Address::setLocality(const string &loc)
{
	(*this).locality=loc;
}

string &Address::getStreet()
{
	return street;
} 

int Address::getNumber()
{
	return number;
}

string &Address::getBlock()
{
	return block;
}

int Address::getApartment()
{
	return apartment;
}

string &Address::getCounty()
{
	return county;
}

string &Address::getLocality()
{
	return locality;
}

bool Address::operator==(const Address &address)
{
	if(county==address.county && locality==address.locality && street==address.street && number==address.number && block==address.block && apartment==address.apartment)
		return true;
	else
		return false;
}

bool Address::operator!=(const Address &address)
{
	 if(county!=address.county && locality!=address.locality && street!=address.street && number!=address.number && block!=address.block && apartment!=address.apartment)
        return true;
    else
        return false;
}

ostream &operator<<(ostream &os, const Address &a)
{
	os<<"Address"<<endl;
	os<<"Jud:"<<a.county<<endl;
	os<<"Loc:"<<a.locality<<endl;
	os<<"Str:"<<a.street<<endl;
	os<<"Nr:"<<a.number<<endl;
	os<<"Bl:"<<a.block<<endl;
	os<<"Ap:"<<a.apartment<<endl;
	
}

json Address::toJSON()
{
	return json(*this);
}