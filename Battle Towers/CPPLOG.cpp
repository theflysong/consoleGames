#include "CPPLOG.h"

ofstream LogOut;
std::ifstream LogTest;
namespace Log 
{ 
	static Log_State Log(std::string file,const char Message[])
	{
		file+=".log";
		LogTest.open(file.c_str());
		if(!LogTest.is_open())
		{
			return -1;
		}
		LogTest.close();
		LogOut.open(file.c_str(),std::ios::app);
		
		if(Message=="")
		{
			return 1;
		}
	
  		char str[128];
	  	time_t lt1;
		time(&lt1);
  		struct tm *ptr=localtime(&lt1);
  	 	LogOut<<"["<<ptr->tm_year+1900<<"-"<<ptr->tm_mon+1<<"-"<<ptr->tm_mday<<"-"<<ptr->tm_hour<<"-"<<ptr->tm_min<<"-"<<ptr->tm_sec<<"]"<<Message; 
		LogOut.close();  
		return 0;
	}
	
	static void CreateFile(std::string file)
	{
		FILE *fileP;  
	    fileP = fopen(file.c_str(), "r");
    	if (fileP == NULL)
	    {
    	    fileP = fopen(file.c_str(), "w");
	    }
    	fclose(fileP);
	}

	static void CreateLog(std::string file)
	{
		file+=".log";    
	    Log::CreateFile(file);
	}

	static void LogJudge(Log_State State)
	{
		Log::CreateLog("CPPLOG");
	
		if(State==-1)
		{
			Log::Log("CPPLOG","Not log file can write \n\r");
		}
		else if(State==1)
		{
			Log::Log("CPPLOG","Message is Empty \n\r");
		}
		else if(State==0)
		{
			Log::Log("CPPLOG","Message is Set \n\r");
		}
	}
}
