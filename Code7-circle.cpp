#include<iostream>

using namespace std;

int main(){
	//diameter, circumference, and area of a circle
	double a, b=3.14, c, d, e;
	cout<<"enter radius: ";
	cin>>e;
	d = 2 * e;
	cout<<"diameter: "<<d;
	c = 2 * b * e;
	cout<<" circumference: "<<c;
	a = e * e * b;
	cout<<" area: "<<a;
	return 0;
}
