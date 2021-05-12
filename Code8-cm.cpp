#include<iostream>

using namespace std;

int main(){
	// convert centimeters to meters and kilometers
	double a, b, c;
	cout<<"Enter centimeters: ";
	cin>>a;
	b = a / 100;
	cout<<"Meter: "<<b;
	c = a / 100000;
	cout<<" Kilometer: "<<c;
	return 0;
}
