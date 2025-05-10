#include <iostream>
using namespace std;

int main(){
	//HW: Enter P, R, T and calculate simple interest
	double p, r, t;

	cout<<"Enter Principle Amount : ";
	cin>>p;
	cout<<"Enter Rate Of Interest : ";
	cin>>r;
	cout<<"Enter Time : ";
	cin>>t;
	cout<<endl;
	double SI = (p * r * t)/100;

	cout<<"Simple Imterest is : "<< SI<<endl;
	return 0;
}
