#include <iostream>
using namespace std;

int main(){
	//HW: Find prime factors of given number

	int inputNumber;
	cin>>inputNumber;

	for(int i=1;i<=inputNumber;i++){
		if(inputNumber%i==0){
			//check i is prime or not.
			int count = 0;
			for(int j=1;j<=i;j++){
				if(i%j == 0)
					count++;
			}
			if(count == 2)
				cout<<i<<" ";
		}
	}
	return 0;
}
