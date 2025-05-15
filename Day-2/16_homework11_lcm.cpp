#include <iostream>
using namespace std;

int main(){
	//HW: Find the LCM of two numbers.
	int inputNumber1, inputNumber2;
	cin>>inputNumber1>>inputNumber2;
	int GCD = 0;

	int minNumber = min(inputNumber1,inputNumber2);
	for(int i = minNumber; i>0; i--){
		if(inputNumber1%i == 0 && inputNumber2%i == 0){
			GCD = i;
			cout<<"GDB of "<<inputNumber1<<" & "<<inputNumber2<<" : "<<GCD<<endl;
			break;
		}
	}
	int LCM = (inputNumber1*inputNumber2)/GCD;
	cout<<"LCM of "<<inputNumber1<<" & "<<inputNumber2<<" : "<<LCM<<endl;
	
	return 0;
}
