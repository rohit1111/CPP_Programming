#include <iostream>
using namespace std;

int main(){
	//HW: Print the given pattern
	//1/ 1+++++++1
	//2/ +2+++++2+
	//3/ ++3+++3++
	//4/ +++4+4+++
	//5/ ++++5++++
	//4/ +++4+4+++
	//3/ ++3+++3++
	//2/ +2+++++2+
	//1/ 1+++++++1
	// n =5;

	int num;
	cin>>num;

	//Upper part
	int leftspace = 0;
	int midspace = 1 + 2*(num-2);
	for(int i=1;i<=num;i++){
		//leftspace
		for(int j=0;j<leftspace;j++){
			cout<<" ";
		}
		//value
		cout<<i;
		//midspace
		for(int j=0;j<midspace;j++){
			cout<<" ";
		}
		//value
		if(i!=num)
			cout<<i;
		leftspace +=1;
		midspace -=2;
		cout<<endl;
	}
	//lower part
	leftspace = leftspace-2;
	midspace = 1;//1 + 2*(num-2);
	for(int i=num-1;i>=1;i--){
		//leftspace
		for(int j=0;j<leftspace;j++){
			cout<<" ";
		}
		//value
		cout<<i;
		//midspace
		for(int j=0;j<midspace;j++){
			cout<<" ";
		}
		//value
		//if(i!=num)
			cout<<i;
		leftspace -=1;
		midspace +=2;
		cout<<endl;
	}	


	return 0;
}
