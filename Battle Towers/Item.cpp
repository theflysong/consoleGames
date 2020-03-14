#include "Item.h"

ItemBasic* ItemBasic::setRegistryName(string RegistryName)
{
	this->RegistryName=RegistryName;
	return this;
}

ItemBasic* ItemBasic::setUnlocalizationName(string UnlocalizationName)
{
	this->UnlocalizationName=UnlocalizationName;
	return this;
}

string ItemBasic::getRegistryName()
{
	return this->RegistryName;
}

string ItemBasic::getUnlocalizationName()
{
	return "item."+this->UnlocalizationName;
}

ItemFood* ItemFood::setRA(int RA)
{
	this->RA=RA;
	return this;
}

ItemFood* ItemFood::setRH(int RH)
{
	this->RH=RH;
	return this;
}

ItemFood* ItemFood::setRD(int RD)
{
	this->RD=RD;
	return this;
}

int ItemFood::getRA()
{
	return this->RA;
}

int ItemFood::getRD()
{
	return this->RD;
}

int ItemFood::getRH()
{
	return this->RH;
}
