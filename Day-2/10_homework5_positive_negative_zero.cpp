#include <iostream>
using namespace std;

int main(){
	//HW: Check the number is positive,negative or zero
	int inputNumber;
	cin>>inputNumber;

	if(inputNumber == 0)
		cout<<"Number is Zero"<<endl;
	else if (inputNumber > 0)
		cout<<"Number is positive"<<endl;
	else
		cout<<"Number is negative"<<endl;
		
	return 0;
}
