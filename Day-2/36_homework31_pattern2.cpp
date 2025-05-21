#include <iostream>
using namespace std;

int main(){
	//HW: Print the given pattern
	//1/ 1
	//2/ 12
	//3/ 123
	//4/ 1234
	//5/ 12345
	//4/ 1234
	//3/ 123
	//2/ 12
	//1/ 1
	// n =5;

	int num;
	cin>>num;

	//Upper part
	for(int i=1;i<=num;i++){
		for(int j=1;j<=i;j++){
			cout<<j;
		}
		cout<<endl;
	}
	//lower part
	for(int i=num-1;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout<<j;
		}
		cout<<endl;
	}	


	return 0;
}
