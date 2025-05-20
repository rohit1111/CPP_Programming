#include <iostream>
using namespace std;

int main(){
	//HW: Rhombus Pattern
	// *****
	//  *****
	//   *****
	//    *****
	//     *****

	int rows;
	cin>>rows;

	for(int i=0;i<rows;i++){
		int printSpace = i;
		while(printSpace != 0){
			cout<<" ";
			printSpace--;
		}
		for(int j=0;j<rows;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
