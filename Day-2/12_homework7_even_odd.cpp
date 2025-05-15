#include <iostream>
using namespace std;

int main(){
	//HW: Check the number is even or odd
	int inputNumber;
	cin>>inputNumber;

	if(inputNumber%2 == 0)
		cout<<"Number is Even"<<endl;
	else
		cout<<"Number is Odd"<<endl;

	return 0;
}
