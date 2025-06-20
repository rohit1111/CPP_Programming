#include <iostream>
using namespace std;

int main(){
	int arr[8] = {12, 25,8,8,10,33,17,11};
	//0-->n-1
	//1-->n-2
	//2-->n-3

	int i=0, j=7;
	while(i<j){
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
	for(int i=0;i<8;i++){
		cout<<arr[i]<<" ";
	} 
	return 0;
}
