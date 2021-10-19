/**
* @imranhazim
*2116445
*Lab#1 Section2
*/
#include<iostream>

using namespace std;

int main() {
	int num,sum,r1,r2,r3,p1,p2,p3;
	cout << "Enter a number between 0 and 1000: ";
	cin >> num;
	r1 = num % 10;
	p1 = num / 10;
	r2 = p1 % 10;
	p2 = p1 / 10;
	r3 = p2 % 10;
	p3 = p2 / 10;
	sum = r1 + r2 +r3;
	cout << "The sum of the digits is " << sum ;

	return 0;
}

