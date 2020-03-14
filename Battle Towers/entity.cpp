#include "entity.h"

EntityBasic* EntityBasic::setRegistryName(string RegistryName)
{
	this->RegistryName=RegistryName;
	return this;
}

EntityBasic* EntityBasic::setUnlocalizationName(string UnlocalizationName)
{
	this->UnlocalizationName=UnlocalizationName;
	return this;
}

void EntityBasic::setHealt(int healt)
{
	this->healt=healt;
}

int EntityBasic::getHealt()
{
	return this->healt;
}

EntityBasic* EntityBasic::setMaxHealt(int Maxhealt)
{
	this->Maxhealt=Maxhealt;
	return this;
}

int EntityBasic::getMaxHealt()
{
	return this->Maxhealt;
}

string EntityBasic::getRegistryName()
{
	return this->RegistryName;
}

string EntityBasic::getUnlocalizationName()
{
	return "entity."+this->UnlocalizationName;
}

void EntityBasic::DropFewItem(EntityBasic sender)
{
	
}
