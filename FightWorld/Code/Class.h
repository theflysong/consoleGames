#ifndef __Class__DEDE__
#define __Class__DEDE__
#include "Head.h"

class Enity
{	
	public:
		int Healt;
		int Aggressivity;
		int Defensive_power;
		int Gold;
		int Level;
		int EXP;
		int SpeedMS;
		int SpeedTime; 
		string RegistryName;
		Enity()
		{
			Healt=0;
			Aggressivity=0;
			Defensive_power=0;
			RegistryName="";
			Gold=0;
			Level=1;
			EXP=0;
		}
		void SetEnity(int healt,int aggressivity,int defensive_power,int speedMS,int speedTime,int level,int exp,int gold,string registryname);
};

void Enity::SetEnity(int healt,int aggressivity,int defensive_power,int speedMS,int speedTime,int level,int exp,int gold,string registryname)
{
	Healt=healt;
	Aggressivity=aggressivity;
	Defensive_power=defensive_power;
	RegistryName=registryname;
	Level=level;
	EXP=exp;
	Gold=gold;
	SpeedMS=speedMS;
	SpeedTime=speedTime;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Item
{	
	public:
		string RegistryName;
		Item()
		{
			RegistryName="";
		}
		void SetItem(string registryname);
};

void Item::SetItem(string registryname)
{
	RegistryName=registryname;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class ItemFood : public Item
{
	public:
		int IHV;
		int IAP;
		int IDP;
		ItemFood()
		{
			IHV=0;
			IAP=0;
			IDP=0;
		}
		void SetItemFood(int ihv,int iap,int idp);
};

void ItemFood::SetItemFood(int ihv,int iap,int idp)
{
	IHV=ihv;
	IAP=iap;
	IDP=idp;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class commodity
{
	public:
		string RegistryName;
		int price; 
		commodity()
		{
			RegistryName="";
			price=0;
		}
};

class shop
{
	public:
		string WelcomeWord;
		string BuyWord;
		string NoMoneyWord;
		string GoWord;
		int CNumber;
		commodity Com[1000];
		shop()
		{
			WelcomeWord="";
			BuyWord="";
			NoMoneyWord="";
			GoWord="";
			CNumber=0;
		}
		void Setshop(string welcomeWord,string buyWord,string noMoneyWord,string goWord,int cNumber);
		bool BuySomething();
};

void shop::Setshop(string welcomeWord,string buyWord,string noMoneyWord,string goWord,int cNumber)
{
	WelcomeWord=welcomeWord;
	BuyWord=buyWord;
	NoMoneyWord=noMoneyWord;
	GoWord=goWord;
	CNumber=cNumber;
}
#endif
