#ifndef __I18N__
#define __I18N__

#include <string>
#include <map>
#include <fstream>
#include <iostream>
using std::string;

namespace I18N
{
	struct word
	{
		string end;
		std::map<string,word*> next;
	};
	extern word nullw;
	
	void read(string file);
	string format(string UnlocalizationName);
	string clips(string &str,char ch);
}

#endif 
