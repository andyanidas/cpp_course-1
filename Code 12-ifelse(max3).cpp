#include<iostream>

using namespace std;

int main(){
	//max of 3 numbers
	int a, b, c;
	cout<<"Input 3 numbers: "<<endl;
	cin>>a>>b>>c;
	if(a>b){
		if(a>c){
			cout<<a<<" is max";
		}
	}
	else if(b>c){
		cout<<b<<" is max";
	}
	else if(c>b){
		cout<<c<<" is max";
	}
	return 0;
}
