#include <iostream>
using namespace std;

int main(){
	//HW: Take two inputs from user and perform all arithmatic operations
	int number1, number2;
	cout<<"Please enter number1 : ";
	cin>>number1;
	cout<<"Please enter number2 : ";
	cin>>number2;
	cout<<endl;

	cout<<"Addition is : "<< number1+number2<<endl;
	cout<<"Substraction is : "<< number1-number2<<endl;
	cout<<"Multiplication is : "<< number1*number2<<endl;
	cout<<"Division is : "<< number1/number2<<endl;
	cout<<"Modulo is : "<< number1%number2<<endl;

	return 0;
}
