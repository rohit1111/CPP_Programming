#include <iostream>
using namespace std;

int main(){
	//HW: print number pattern with 1, 0 at alternate columns
	int rows, columns;
	cin>>rows>>columns;

	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
			if(j%2 == 0)
				cout<<"0";
			else
				cout<<"1";
		}
		cout<<endl;
	}
	return 0;
}
