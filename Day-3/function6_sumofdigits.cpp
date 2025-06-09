#include <iostream>
using namespace std;
int SumOfDigits(int number){
	int sum = 0;
	while(number>0){
		sum += number%10;
		number /= 10;
	}
	return sum;
}
int main(){
	//HW: Find sum of digits using functions.
	int number;
	cin>>number;

	int result = SumOfDigits(number);
	cout<<"Sum of Digits of number " << number <<", is "<<result<<endl;
	return 0;
}
