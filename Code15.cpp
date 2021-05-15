#include<iostream>

using namespace std;

int main(){
	/*finding if a number is even or odd*/
	int a;
	cout<<"Enter a number: ";
	cin>>a;
	if(0==a%2){
		cout<<a<<" is even";
	}
	else{
		cout<<a<<" is odd";
	}
	
	return 0;
}
