
#include <iostream>
using namespace std;

int main(){
	//HW: Print multiplication table of given number.
	int inputNumber;
	cin>>inputNumber;

	for(int i=1;i<=10;i++){
		cout<<inputNumber<<" * "<<i<<" = "<<inputNumber * i<<endl;
	}
	return 0;
}
