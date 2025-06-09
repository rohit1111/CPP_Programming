#include <iostream>
using namespace std;
long fact(int n){
	int factorial = 1;
	for(int i=1;i<=n;i++){
		factorial *= i;
	}
	return factorial;
}
long nCrFactorial(int n, int r){
	long Nfactorial = fact(n);
	long rfactorial = fact(r);
	long nrfactorial = fact(n-r);

	long nCr = Nfactorial / (rfactorial * nrfactorial);

	return nCr;

}
int main(){
	//HW. Find nCr = n!/(r! * (n-r)!)
	int n, r;
	cin>>n>>r;

	cout << nCrFactorial(n,r)<<endl;
	return 0;
}
