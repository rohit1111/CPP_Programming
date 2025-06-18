#include <iostream>
using namespace std;

int main(){
	//HW: Print even and odd numbers from array in sprate array.
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	int evenCounter = 0;
	int oddCounter = 0;
	for(int i=0;i<n;i++){
		if(arr[i]%2 == 0)
			evenCounter++;
		else
			oddCounter++;
	}

	if(evenCounter > 0 && oddCounter > 0){
		int evenArray[evenCounter], evenIndex = 0;
		for(int i=0;i<n;i++){
			if(arr[i]%2 == 0){
				evenArray[evenIndex] = arr[i];
				cout<<evenArray[evenIndex++]<<" ";
			}
		}

	}
	cout<<endl;
	if(oddCounter > 0){
		int oddArray[oddCounter], oddIndex = 0;
		for(int i=0;i<n;i++){
			if(arr[i]%2 != 0){
				oddArray[oddIndex] = arr[i];
				cout<<oddArray[oddIndex++]<<" ";
			}
		}

	}
	return 0;
}
