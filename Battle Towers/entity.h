#ifndef __ENTITY__
#define __ENTITY__

#include "head.h"

class EntityBasic
{
	private:
		string RegistryName;
		string UnlocalizationName;
		int Maxhealt;
		int healt;
	public:
		virtual EntityBasic* setRegistryName(string RegistryName);
		virtual EntityBasic* setUnlocalizationName(string UnlocalizationName);
		virtual EntityBasic* setMaxHealt(int Maxhealt);
		virtual int getMaxHealt();
		virtual void setHealt(int healt);
		virtual int getHealt();
		virtual string getRegistryName();
		virtual string getUnlocalizationName();
		virtual void DropFewItem(EntityBasic sender);
};

#endif
