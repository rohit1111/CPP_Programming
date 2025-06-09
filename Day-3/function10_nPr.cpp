#include <iostream>
using namespace std;

long factorial(int n){

	int fact = 1;
	for(int i=1;i<=n;i++){
		fact *= i;
	}
	return fact;
}
long nPrFact(int n, int r){
	long nFactorial = factorial(n);
	long nrFactorial = factorial(n-r);
	long nPr = nFactorial/nrFactorial;
	return nPr;
}
int main(){
	//HW: nPr = n! / (n-r)!

	int n, r;
	cin>>n>>r;

	cout << nPrFact(n,r)<<endl;
	return 0;
}
