#include <iostream>
using namespace std;

int main(){
	//HW: Find max of 3 numbers.
	int num1, num2, num3;
	cin>>num1>>num2>>num3;

	if(num1 == num2 && num1 == num3)
		cout<<"All are same";
	else if(num1>=num2 && num1>=num3)
		cout<<num1;
	else if(num2>=num1 && num2 >= num3)
		cout<<num2;
	else if(num3>=num1 && num3 >= num2)
		cout<<num3;
	return 0;
}
