#include <iostream>
using namespace std;

int main(){
	//HW: print the odd number between 1 to n
	int inputNumber;
	cin>>inputNumber;

	for(int i=1;i<=inputNumber;i+=2){
		cout<<i<<", ";
	}
	return 0;
}
