#include "head.h"

class ItemBasic
{
	private:
		string RegistryName;
		string UnlocalizationName;
	public:
		virtual ItemBasic* setRegistryName(string RegistryName);
		virtual ItemBasic* setUnlocalizationName(string UnlocalizationName);
		virtual string getRegistryName();
		virtual string getUnlocalizationName();
};

class ItemFood : public ItemBasic
{
	private:
		int RH;
		int RA;
		int RD;
	public:
		virtual ItemFood* setRH(int RH);
		virtual ItemFood* setRA(int RA);
		virtual ItemFood* setRD(int RD);
		virtual int getRH();
		virtual int getRA();
		virtual int getRD();
		virtual bool isEat()=0;
};
