#include<iostream>

using namespace std;

int main(){
	//fahrenheit to celsius
	double a, b, c;
	cout<<"input fahrenheit: ";
	cin>>a;
	b = a - 32;
	c = b * 0.555555556;
	cout<<"Celsius: "<<c;
	return 0;
}
