#include <iostream>
using namespace std;

int main(){
	//HW: Find first N number that have sum of digits = k

	int totalNumbers, targetSumDigits;
	cin>>totalNumbers>>targetSumDigits;
	int count =0, i = 1;

	while(count != totalNumbers){
		int num = i;
		int sum = 0;
		while(num>0){
			sum += num%10;
			num /=10;
		}
		if(sum == targetSumDigits){
			cout<<i<<" ";
			count++;
		}
		i++;
	}

	return 0;
}
