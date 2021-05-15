#include<iostream>

using namespace std;

int main(){
	//if a number is divisible by 5 or 11
	int a;
	cout<<"choose a number: ";
	cin>>a;
	if((0==a%5) &&  (0==a%11)){
		cout<<a<< " is divisible by 5 and 11";
	}
	else if(0==a%5){
		cout<<a<< " is divisible by 5";
	}
	else if(0==a%11){
		cout<<a<< " is divisible by 11";
	}
	else{
		cout<<a<<" is not divisible by 5 or 11";
	}
	return 0;
}
