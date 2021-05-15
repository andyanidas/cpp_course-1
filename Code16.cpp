#include<iostream>

using namespace std;

int main(){
	/*finding if a year is a leap year or not*/
	int a;
	cout<<"Input a year: ";
	cin>>a;
	if((0==a%4) && (0!=a%100)){
		cout<<"year is a leap year";
	}
	else{
		cout<<"year is not a leap year";
	}
	return 0;
}
