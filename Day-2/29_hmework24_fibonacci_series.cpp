#include <iostream>
using namespace std;

int main()
{
	//HW: Fibonacci series upto n.
	int inputNumber;
	cin>>inputNumber;

	int firstTerm = 0;
	int secondTerm = 1;
	if(inputNumber >= 1)
		cout<<firstTerm<<" ";
	if(inputNumber >= 2)
		cout<<secondTerm<<" ";
	
	inputNumber = inputNumber -2;

	for(int i=1;i<=inputNumber;i++){
		int thirdTerm = firstTerm + secondTerm;
		firstTerm = secondTerm;
		secondTerm = thirdTerm;
		cout<<thirdTerm<<" ";
	}
	return 0;
}
