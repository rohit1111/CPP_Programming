#include<iostream>
using namespace std;
bool isPrime(int number){
	int count = 0;
	for(int i=1;i<=number;i++){
		if(number%i == 0)
			count++;
	}
	if(count == 2)
		return true;

	return false;
}
void primeNumbersInRange(int lowerLimit, int upperLimit){
	for(int i = lowerLimit; i < upperLimit; i++){
		bool primeNumber = isPrime(i);
		if(primeNumber == true)
			cout<<i<<" ";
	}
	cout<<endl;
}
int main(){
	//HW: Prime number between given range
	int lowerLimit, upperLimit;
	cin>>lowerLimit>>upperLimit;

	primeNumbersInRange(lowerLimit,upperLimit);
	return 0;
}
