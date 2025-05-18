#include <iostream>
using namespace std;

int main(){
	//HW: Check all the numbers between 1 to N ad print if its armstrong number
	int inputRange;
	cin>>inputRange;

	for(int i = 1;i<=inputRange;i++){

    int inputNumber = i;

	int originalNumber = inputNumber;
	int digitsCount = 0;
	while(inputNumber>0){
		inputNumber /= 10;
		digitsCount++;
	}

	inputNumber = originalNumber;
	int sum = 0;
	while(inputNumber>0){
		int lastDigit = inputNumber%10;
		int digitpow = 1;
		for(int i = 0; i<digitsCount;i++){
			digitpow = digitpow * lastDigit;
			//cout<<digitpow<<" ";
		}
		sum = sum + digitpow;
		inputNumber /= 10;
	}
	if (sum == originalNumber)
		cout <<originalNumber<<" ";
	}
	return 0;
}
