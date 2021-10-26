#include<iostream>
#include <iomanip> 
#include<cmath>
/**
*@Imran Hazim Bin Abdullah Salim
* Matric no: 2116445
* Lab #3 Section #2
*/
using namespace std;

int main() {
	double wkg,wlbs;
	cout << "Enter weight in kg: " ;
	cin >> wkg ;
	wlbs = wkg * 2.2046;
	cout << setprecision();
	cout << fixed << showpoint;
	cout << "Weight in kg is " << wkg << "kg and weight in pound is " << wlbs << "lbs" ;
	return 0;
}

