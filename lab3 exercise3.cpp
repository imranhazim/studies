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
	double x,y,m,n,distance;
	cout << "Enter speed of car A and B:";
	cin >> x >> y;
	cout << "Enter the time elapsed for car A and B(in hours and minutes):";
	cin >> m >> n;
	
	distance = (x * m)+ (y * n);
	cout << fixed << showpoint;
		cout << setprecision(2);
	cout << "The distance between the cars is " << distance << "miles";
	return 0;
}

