#include <iostream>
using namespace std;

int main(){
	//HW: Check the number is divisible by 5 and 11 or not
	int inputNumber;
	cin>>inputNumber;

	if(inputNumber%5 == 0 && inputNumber%11 == 0)
		cout<<"Number is divisible by 5 and 11 both"<<endl;
	else
		cout<<"Number is not divisible by 5 and 11 both"<<endl;

	return 0;
}
