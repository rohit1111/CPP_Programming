#include<iostream>
using namespace std;

int main(){
	//HW: Print & count the number of digits in positive number.

	int inputPositiveNumber;
	cin>>inputPositiveNumber;

	if(inputPositiveNumber < 0){
		cout<<"Number is not positive"<<endl;
	}
	int digits = 0;
	while(inputPositiveNumber>0){
		cout<<inputPositiveNumber%10<<endl;
		digits+=1;
		inputPositiveNumber = inputPositiveNumber/10;
	}
	cout<<"Number of digits: "<<digits<<endl;
	return 0;
}
