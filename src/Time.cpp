//============================================================================
// Name        : Time.cpp
// Author      : Spoorthi Gowda
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include "Time.h"

using namespace std;

Time::Time()
{
	hour = min = sec = 0;
}

Time::~Time()
{

}

Time::Time(int h, int m, int s)
{
	setTime(h, m, s);
}

void Time::setTime(int h, int m, int s)
{
  // data invariant check to ensure correct values given for time otherwise set to 0
  hour = (h>=0 && h<24) ? h : 0;
  min = (m>=0 && m<60) ? m : 0;
  sec = (s>=0 && s<60) ? s : 0;
}

// comparsion operand method
bool Time::operator==(Time t){
	if ( this-> hour == t.hour && this-> min == t.min && this-> sec == t.sec ) {
		return true;
	}

		return false;

}

// compound operand method
Time Time::operator+=(Time tt)
{

	hour+=tt.hour;
	min+=tt.min;
	sec+=tt.sec;

	// adjusting seconds if its more than 60 after adding the two times
	if(sec > 60){
		sec = sec - 60;
		min = min + 1;

	}

	// adjusting minutes if its more than 60 after adding the two times
	if(min > 60){
		min = min - 60;
		hour = hour + 1;
	}

	// adjusting hours if its more than 24 after adding the two times
	if(hour > 24){
		hour = hour - 24;
	}

	return *this;


}

// time printed like h:m:s
void Time::print(){

	cout << hour << ":" << min << ":" << sec << endl;

}

Time Time::operator=(Time tt)
{
	hour=tt.hour;
	min=tt.min;
	sec=tt.sec;
	return *this;
}

// arithmetic operand method
Time Time::operator+(Time tt)
{
	Time result;
	result.hour = this->hour + tt.hour;
	result.min  = this->min + tt.min;
	result.sec  = this->sec + tt.sec;

	// adjusting seconds if its more than 60 after adding the two times
	if(result.sec > 60){
		result.sec = result.sec - 60;
		result.min = result.min + 1;

	}

	// adjusting minutes if its more than 60 after adding the two times
	if(result.min > 60){
			result.min = result.min - 60;
			result.hour = result.hour + 1;
	}

	// adjusting minutes if its more than 24 after adding the two times
	if(result.hour > 24){
			result.hour = result.hour - 24;
	}

	return result;
}

