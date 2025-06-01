#include <iostream>
using namespace std;
int number_of_digits(int number){
	int count = 0;
	while(number>0){
		number /= 10;
		count++;
	}
	return count;
}
int power(int digit, int x){
	int result = 1;
	for(int i=1;i<=x;i++){
		result *= digit;
	}
	return result;
}
int sum_of_power_of_digits(int number){
	// calc number of digits
	int x = number_of_digits(number);
	// calc power of digits till digits available and sum it.
	int sum = 0;
	while(number>0){
		sum += power(number%10,x);
		number /= 10;
	}
	return sum;
}
int main(){
	//HW: Check number is armstrong number?

	int number;
	cin>>number;

	if(number == sum_of_power_of_digits(number)){
		cout<<"Armstrong Number: "<< number <<endl;
	}
	else{
		cout<<"Not Armstrong Number: "<< number <<endl;
	}
	return 0;
}
