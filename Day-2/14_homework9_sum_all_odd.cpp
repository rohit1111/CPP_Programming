#include <iostream>
using namespace std;

int main(){
	//HW: Find the sum of all the odd numbers between 1 to n
	int inputNumber;
	cin>>inputNumber;
	int sumAllEvenNumbers = 0;
	for(int i=1;i<=inputNumber;++i){
		if(i%2 != 0)
			sumAllEvenNumbers +=i;
	}
	
	cout<<"Sum of all the numbers between 1 to "<<inputNumber<<" = "<<sumAllEvenNumbers<<endl;

	return 0;
}
