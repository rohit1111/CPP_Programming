#include <iostream>
using namespace std;

int main(){
	//HW: Find max of 2 numbers.
	int num1, num2;
	cin>>num1>>num2;

	if(num1>num2)
		cout<<num1<<endl;
	else if(num1 == num2)
		cout<<"Both numbers are equal"<<endl;
	else
		cout<<num2<<endl;
	return 0;
}
