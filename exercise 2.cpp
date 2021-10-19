/**
* @imranhazim
*2116445
*Lab#1 Section2
*/
#include<iostream>

using namespace std;

int main() {
	float gratuity,gratuity_rate,subtotal,total;
	cout << "Enter the subtotal and gratuity rate :";
	cin >> subtotal;
	cin >> gratuity_rate;
	gratuity = (gratuity_rate/100)*subtotal;
	total = gratuity + subtotal;
	cout << "The gratuity is $" << gratuity << " and total is $" << total ;
	
	return 0;
}

