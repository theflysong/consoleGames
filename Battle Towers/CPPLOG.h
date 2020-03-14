#ifndef __CPPLOG__
#define __CPPLOG__

#include<fstream>
#include<string>
#include<cstdio>
#include<ctime>

using std::ofstream;
extern ofstream LogOut;
extern std::ifstream LogTest;
#define Log_State int

namespace Log
{
	static Log_State Log(std::string file,const char Message[]);
	static void CreateFile(std::string file);
	static void CreateLog(std::string file);
	static void LogJudge(Log_State State);
}

#endif
