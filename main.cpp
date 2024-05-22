#include <iostream>
#include "over.h"
using namespace std;
void main() {
	fruit a, b;
	apple cc;
	cout << a.show() << endl;
	//a * 10;  // 10% increase (400 --> 440)
	cout << a.show() << endl;
	//b* (-10.0); // 10% decrease (400 --> 360)
	cout << b.show() << endl;
	// inherit operator overloading
	cout << cc.show() << endl;
	//cc * 10;  // 10% increase (4000 --> 4400)
	cc.discount(10);
	cout << cc.show() << endl;
	cout << cc.redness << endl;
	cc - 2;
	cout << cc.redness << endl;
}
