#include <iostream>
using namespace std;

int main()
{
	//HW: FizzBuzz game
	//if i is divisible by 3 and 5 then print fizzbuzz
	//if i is divisible by 3 then print fizz
	//if i is divisible by 5 then print buzz
	//if none of above then print i
	//if i is multiple of 2 then do not print anything
	//if i is dengaer number then stop the loop

	int inputNumber, inputDengerNumber;
	cin>>inputNumber>>inputDengerNumber;

	for(int i = 1;i<=inputNumber;i++){
		if(i == inputDengerNumber){
			break;
		}
		if(i%2 == 0){
			continue;
		}
		cout<<i<<" = ";
		if(i%3 == 0 && i%5 == 0){
			cout<<"FizzBuzz"<<endl;
		}else if(i%3 ==0){
			cout<<"Fizz"<<endl;
		}
		else if(i%5 == 0){
			cout<<"Buzz"<<endl;
		}
		else{
			cout<<i<<endl;
		}
	}
	return 0;
}
