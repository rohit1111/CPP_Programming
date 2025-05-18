#include <iostream>
using namespace std;

int main(){
	//HW: Check if given number is armstrog number or not.
	//1. count the number of digits in number; d
	//2. take every digit^d and sum it.
	//3. if the number and sum are equal then armstrn number.

	int inputNumber;
	cin>>inputNumber;

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
			cout<<digitpow<<" ";
		}
		sum = sum + digitpow;
		inputNumber /= 10;
	}
	if (sum == originalNumber)
		cout <<"Armstrong Number"<<endl;
	else
		cout <<"Not Armstrong Number"<<endl;
	return 0;
}
