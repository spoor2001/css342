//============================================================================
// Name        : TimeDemo.cpp
// Author      : Spoorthi Gowda
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Time.h"
using namespace std;

int main() {


	Time t1a(23,59,59);
	Time t2a(5,20,20);
	Time t3a;

	// using comparsion operator
		if( t1a == t2a ) {
			cout<< "t1a is ";
			t1a.print();
			cout<< "t2a is ";
			t2a.print();
			cout<< "both times are equal "<< endl;
		} else {
			cout<< "t1a is ";
			t1a.print();
			cout<< "t2a is ";
		    t2a.print();
			cout<< "both times are NOT equal "<< endl;
		}

	Time t1b(6,43,58);
	Time t2b(6,43,58);
	Time t3b;

	cout << endl;

	if( t1b == t2b ) {
			cout<< "t1a is ";
			t1b.print();
			cout<< "t2b is ";
			t2b.print();
			cout<< "both times are equal "<< endl;
		} else {
			cout<< "t1b is ";
			t1a.print();
			cout<< "t2b is ";
		    t2b.print();
			cout<< "both times are NOT equal "<< endl;

		}



	// using compound operator
	cout<<endl;
	cout<<"t1a is " ;
	t1a.print();
	cout<<"t2a is " ;
	t2a.print();
	t1a += t2a;

	cout<<"the sum of t1a and t2a is ";
    t1a.print();


    Time t4(23,59,59);
    Time t5(5,20,20);

    Time t6;

    cout<<endl;
    cout<<"t4 is ";
    t4.print();
    cout<<"t5 is ";
    t5.print();

    // using arithmetic operator
    t6= t4+t5;


    cout<<"the sum of t4 and t5 is ";
    t6.print();


	return 0;
}
