#include <iostream>
using namespace std;

int main(){
	//HW: Find reverse of number

	int inputNumber;
	cin>>inputNumber;

	int reverseNumber = 0;

	while(inputNumber != 0){
		int digit = inputNumber%10;
		inputNumber /=10;
		reverseNumber = reverseNumber * 10 + digit;
	}
	cout<<"Reverse Number: "<<reverseNumber<<endl;
	return 0;
}
