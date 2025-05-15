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
	//3. check how may divisiors available for number
	//4. if number is 1 then its not composite and nor prime.
	//5. else if divisiors are itself and 1 i.e only two then prime
	//6. else number is composite.


	int inputNumber, countDivisiors = 0;
	cin>>inputNumber;

	for(int i=1;i<=inputNumber;i++){
		if((inputNumber%i) == 0)
			countDivisiors++;
	}
	cout<<"Number: "<<inputNumber<<", has factors/divisiors: "<<countDivisiors<<endl;
	if(inputNumber == 1)
		cout<<"Number: "<<inputNumber<<", is not prime and nor composite"<<endl;
	else if(countDivisiors == 2)
		cout<<"Number: "<<inputNumber<<", is prime"<<endl;
	else
		cout<<"Number: "<<inputNumber<<", is composite"<<endl;

	return 0;
}
