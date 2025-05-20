#include <iostream>
using namespace std;

int main(){
	//HW: Dimond Start Pattern
	//       *
	//      **
	//     ****
	//    ******
	//	 ********
	//	**********
	//	 ********
	//    ******
	//     ****
	//      **
	//       *
	// n = 6

	int n;
	cin>>n;

	int stars = 1, spaces = n-1;
	for(int i = 1; i<=n*2 -1 ;i++){
		for(int k = 1; k<=spaces; k++){
			cout<<" ";
		}
		for(int j = 1; j <= stars;j++){
			cout<<"*";
		}
		cout<<endl;
		if(i<n){
			stars +=2;
			spaces -=1;
			}
		else{
			stars -=2;
			spaces +=1;
			}
	}
	return 0;
}
