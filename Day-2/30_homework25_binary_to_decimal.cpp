#include <iostream>

using namespace std;

int main(){
	//HW: binary to decimal conversion
	int inputNumber;
	cin>>inputNumber;

	int power = 1;
	int sum = 0;

	while(inputNumber>0){
		int lastDIgit = inputNumber%10;
		sum = sum + lastDIgit * power;
		power *=2;
		inputNumber /= 10;
	}
	cout<<"Decimal Number = "<<sum;
	return 0;
}
