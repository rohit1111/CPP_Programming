#include <iostream>
using namespace std;

int main(){
	//HW: Print Squar Pattern 
	// ****
	// ****
	// ****
	// ****

	int rows, columns = 0;
	cin>>rows>>columns;

	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
