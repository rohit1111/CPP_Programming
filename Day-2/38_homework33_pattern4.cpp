#include <iostream>
using namespace std;

int main(){
	//HW: Print the given pattern
	//1/ ++++*****
	//2/ +++*+++*
	//3/ ++*+++*
	//4/ +*+++*
	//5/ *****
	// n =5;

	int num;
	cin>>num;

	//Upper part
	int leftspace = num-1;
	int midspace = num-2;
	for(int i=1;i<=num;i++){
		//leftspace
		for(int j=0;j<leftspace;j++){
			cout<<" ";
		}
		//*
		if(i == 1 || i == num){
			for(int j=1;j<=num;j++){
				cout<<"*";
			}
		}else{
		cout<<"*";
		//midspace
		for(int j=0;j<midspace;j++){
			cout<<" ";
		}
		//*
		cout<<"*";
		}
		leftspace -=1;
		cout<<endl;
	}


	return 0;
}
