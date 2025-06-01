#include <iostream>
using namespace std;

int sumOfDigits(int number);

int main(){
	int number;
	cin>>number;

	int result = sumOfDigits(number);
	cout<<"Number: "<< number << ", & Sum Of Digits: "<<result<<endl;
	return 0;
}

int sumOfDigits(int number){
	int result = 0;
	while(number>0){
		result += number%10;
		number /=10;
	}
	return result;
}
