#include <iostream>
using namespace std;
int max(int number1, int number2){
	if(number1 > number2)
		return number1;
	else
		return number2;
}
int min(int number1, int number2){
	if(number1 < number2)
		return number1;
	else
		return number2;
}
int main(){
	//HW: Minimum and Maximum of two numbers
	int number1, number2;
	cin>>number1>>number2;

	cout<<"Maximum number is: "<<max(number1,number2)<<endl;
	cout<<"Minimum number is: "<<min(number1,number2)<<endl;
	return 0;
}
