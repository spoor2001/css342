//============================================================================
// Name        : Time.h
// Author      : Spoorthi Gowda
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#ifndef _TIMEX_H_
#include <iostream>
#define _TIMEX_H_

using namespace std;

#include <iostream>

class Time
{
	public:
		Time();
		Time(int h, int m = 0, int s = 0);
		void setTime(int, int, int);


		Time operator=(Time t);

		// defining + operator
		Time operator+(Time tt);
		// defining += operator
		Time operator+=(Time t);
		// defining == operator
		bool operator==(Time t);

		void print();
		~Time();

  private:
		// defining variables hour, min, and sec
		int hour, min, sec;

};

#endif
