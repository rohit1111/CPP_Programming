#include <iostream>
using namespace std;

int main(){
	//HW: Find the sum of digits in positive number
	int inputPositiveNumber;
	cin>>inputPositiveNumber;

	if(inputPositiveNumber<0){
		cout<<"Number is not positive"<<endl;
	}

	int sumDigits = 0;
	while(inputPositiveNumber>0){
		sumDigits += inputPositiveNumber%10;
		inputPositiveNumber /=10;
	}
	cout<<"Sum of digits: "<<sumDigits<<endl;

	return 0;
}
