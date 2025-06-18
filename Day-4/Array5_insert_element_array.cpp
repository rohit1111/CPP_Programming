#include <iostream>
using namespace std;
void insertInArray(int value, int position, int arr[], int arrSize){
	int arrResult[arrSize+1];

	int i = 0;
	for(int j=0; j<arrSize+1; j++){
		if(j == position-1){
			arrResult[j] = value;
		}
		else{
			arrResult[j] = arr[i];
			i++;
		}
	}

	for(int i =0; i<arrSize+1;i++){
		cout<<arrResult[i] <<" ";
	}
	cout<<endl;
}

int main(){
	
	//HW: Insert element in array at certain posistion.

	int n;
	cin>>n;
	int arr1[n]; // = {10,20,30,40,50};
	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}
	int value, position;
	cin>>value>>position;

	insertInArray(value,position,arr1, n);
	
	return 0;
}
