#include<iostream>
#include <iomanip> 
#include<cmath>
/**
*@Imran Hazim Bin Abdullah Salim
* Matric no: 2116445
* Lab #3 Section #2
*/
#include<iostream>

using namespace std;

int main() {
	double length,width;
	cout << "Enter the length: ";
	cin >> length;
	width = length / 1.5;
	cout << fixed << showpoint;
		cout << setprecision(2);
	cout << "The length of the wire is " << length << " and the width is " << width ;
	
	return 0;
}

