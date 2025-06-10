#include <iostream>
#include <climits>
using namespace std;
int minElement(int arr[], int n){
	int min = INT_MAX;
	
	for(int i=0;i<n;i++){
		if(min > arr[i])
			min = arr[i];
	}
	return min;
}
int maxElement(int arr[], int n){
	int max = INT_MIN;
	
	for(int i=0;i<n;i++){
		if(max < arr[i])
			max = arr[i];
	}
	return max;
}
int main(){
	int n = 10;
	int arr[n] = {10, 2, 30, 4, 50, 6, 70, 80, 90, 100};
	cout<<"INT MIN: "<<INT_MIN<<endl;
	cout<<"INT MAX: "<<INT_MAX<<endl;

	cout<<"Minimum Element: "<<minElement(arr,n)<<endl;
	cout<<"Maximum Element: "<<maxElement(arr,n)<<endl;
	return 0;
}
