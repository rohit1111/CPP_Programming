#include <iostream>
using namespace std;

int main(){
	//HW: Sum of digits for all numbers from 1 to n
	int inputNumber;
	cin>>inputNumber;

	for(int i=1;i<=inputNumber;i++){
		int num = i;
		int sum = 0;
		while(num>0){
			sum +=num%10;
			num /=10;
		}
		cout<<sum<<endl;
	}
	return 0;
}
