#include <string.h>
#include "MyTime.h"
#include "ValueOutOfRangeException.h"


using namespace std;

MyTime:: MyTime(){
    setTime(0, 0, 0);
}


MyTime::MyTime(int t_hour, int t_minute, int t_second){
	setTime(t_hour, t_minute, t_second);
}

void MyTime:: setTime(int t_hour, int t_minute, int t_second){
	setHour(t_hour);
	setMinute(t_minute);
	setSecond(t_second);
}

int MyTime::getHour(){
	return t_hour;
}

int MyTime::getMinute(){
	return t_minute;
}

int MyTime::getSecond(){
	return t_second;
}

void MyTime::setHour(int t_hour){
	if (t_hour>=0 && t_hour <=23){
			this->t_hour=t_hour;
	}
	else{
		throw ValueOutOfRangeException();
	}
}

void MyTime::setMinute(int t_minute){
	if (t_minute >=0 && t_minute <=59){
		this->t_minute=t_minute;
	}
	else{
		throw ValueOutOfRangeException();
	}
}

void MyTime::setSecond(int t_second){
	if (t_second >=0 && t_second<=59){
		this->t_second=t_second;
	}
	else{
		throw ValueOutOfRangeException();
	}
}


MyTime MyTime::nextSecond(){
	MyTime t1;
	if (this->t_second==59){
		throw ValueOutOfRangeException();
	}else{
		t1.setTime(this->t_hour, this->t_minute, ++this->t_second);
		return t1;
	}


}

MyTime MyTime::nextMinute(){
	MyTime t1;

	if (this->t_minute==59){
		throw ValueOutOfRangeException();

	}else{
		t1.setTime(this->t_hour, ++this->t_minute, this->t_second);
		return t1;
	}

}

MyTime MyTime::nextHour(){
	MyTime t1;

	if (this->t_hour==23){
		throw ValueOutOfRangeException();
	}else{
		t1.setTime(++this->t_hour, this->t_minute, this->t_second);
		return t1;
	}

}

void MyTime::toString(){
	cout<< t_hour << " : " << t_minute << " : " << t_second;
}


