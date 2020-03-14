#include "I18N.h"

namespace I18N
{
	word nullw;
	void read(string file)
	{
		std::ifstream fin;
		fin.open(file.c_str());
		char ch=0;
		string words;
		string eword="";
		word* w=&nullw;
		while(true)
		{
			ch=fin.get();
			if(fin.eof())
			{
				break;
			}
			if(ch!='.'&&ch!='=')
			{
				words+=ch;
			}
			else 
			{
				w->next[words]=new word;
				w=w->next[words];
				if(ch=='=')
				{
					fin>>eword;
					w->end=eword;
				}
				words="";
			}
		}
	}
	
	string format(string UnlocalizationName)
	{
		string now=clips(UnlocalizationName,'.');
		word* w=nullw.next[now];

		while(true)
		{
			now=clips(UnlocalizationName,'.');
			if(w->next.count(now)==0)
			{
				if(now.length()!=0)
				{
					now="."+now;
				}
				if(UnlocalizationName.length()!=0)
				{
					UnlocalizationName="."+UnlocalizationName;
				}
				return w->end+now+UnlocalizationName;
			}
			w=w->next[now];
		}
	}
	
	string clips(string &str,char ch)
	{
		string a="";
		string b=str;
		int j=str.length();
		for(int i=0;i<str.length();i++)
		{
			if(str[i]==ch)
			{
				j=i+1;
				break;
			}
			a+=str[i];
		}
		str="";
		for(int i=0;i+j<b.length();i++)
		{
			str+=b[i+j];
		}
		return a;
	}
}
