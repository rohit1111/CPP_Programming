#include <iostream>
using namespace std;

int main(){
	//HW: Check the number is prime or not.
	//Prime: Number is divisible by itself and 1 
	//Prime: 1 is not prime and nor a composite.
	//Composite: Number has more than two divisirs apart from itself and 1.

	//Sudo code:
	//1. start the program
	//2. take number as input
	//3. check if number is equal or leass than 1 then not prime
	//4. check if number is equal to 2 then its prime.
	//5. check if number%2 == 0 then its not prime.
	//6. check if number%i == 0, if i is odd and less than mid of number, then its not prime.
  //7. elase it is prime.


	int inputNumber;
	cin>>inputNumber;

	if(inputNumber<=1){
		cout<<"Not Prime"<<endl;
		return 0;
	}
	else if (inputNumber == 2){
		cout<<"Prime"<<endl;
		return 0;
	}
	else if(inputNumber % 2 == 0){
		cout<<"Not Prime"<<endl;
		return 0;
	}

	for(int i = 3; i*i <= inputNumber;i+=2)	// i*i checks if divisior is not greater than mid. 
	{
		if(inputNumber%i == 0){
			cout<<"Not Prime"<<endl;
			return 0;
		}
	}
	cout<<"Prime"<<endl;
	return 0;
}
