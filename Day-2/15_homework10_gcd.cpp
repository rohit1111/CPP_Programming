#include <iostream>
using namespace std;

int main(){
	//HW: Find the HFC/GCD of two numbers.
	int inputNumber1, inputNumber2;
	cin>>inputNumber1>>inputNumber2;

	int minNumber = min(inputNumber1,inputNumber2);
	for(int i = minNumber; i>0; i--){
		if(inputNumber1%i == 0 && inputNumber2%i == 0){
			cout<<"GDB of "<<inputNumber1<<" & "<<inputNumber2<<" : "<<i<<endl;
			break;
		}
	}
	
	return 0;
}
