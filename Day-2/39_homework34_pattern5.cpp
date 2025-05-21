#include <iostream>
using namespace std;

int main(){
	//HW: Print the given pattern
	//1/ **********
	//2/ ****++****
	//3/ ***++++***
	//4/ **++++++**
	//5/ *++++++++*
	//5/ *++++++++*
	//4/ **++++++**
	//3/ ***++++***
	//2/ ****++****
	//1/ **********
	// n =5;

	int num;
	cin>>num;

	//Upper part
	int star = num;
	int space = 0;
	for(int i=1;i<=num;i++){
		//star
		for(int j=1;j<=star;j++){
			cout<<"*";
		}
		//space
		for(int j=1;j<=space;j++){
			cout<<" ";
		}
		//star
		for(int j=1;j<=star;j++){
			cout<<"*";
		}
		star -=1;
		space +=2;
		cout<<endl;
	}

	//Lower Part
	star = 1;
	space = space-2;
	for(int i=1;i<=num;i++){
		//star
		for(int j=1;j<=star;j++){
			cout<<"*";
		}
		//space
		for(int j=1;j<=space;j++){
			cout<<" ";
		}
		//star
		for(int j=1;j<=star;j++){
			cout<<"*";
		}
		star +=1;
		space -=2;
		cout<<endl;
	}
	return 0;
}
