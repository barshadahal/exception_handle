#include <string.h>
#include <iostream>
using namespace std;

#ifndef MYTIME_H
#define MYTIME_H

class MyTime{

	public:
		MyTime();
		MyTime(int t_hour, int t_minute, int t_second);

		void setTime(int t_hour, int t_minute, int t_second);
		int getHour();
		int getMinute();
		int getSecond();

		void setHour(int t_hour);
		void setMinute(int t_minute);
		void setSecond(int t_second);
		void toString();

		MyTime nextSecond();
		MyTime nextMinute();
		MyTime nextHour();

    private:
		int t_hour;
		int t_minute;
		int t_second;

};

#endif
