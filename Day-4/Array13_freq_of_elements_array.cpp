#include <iostream>
using namespace std;


int main(){
	int n = 10;
	int arr[n] = {1,2,2,2,2,3,3,4,2,100};
	int max_ele = arr[0];
	for(int i=0;i<n;i++){
		if(max_ele < arr[i])
			max_ele = arr[i];
	}

	int arrMap[max_ele+1] = {0};
	for(int i=0;i<n;i++){
		arrMap[arr[i]]++;
	}

	for(int i=0;i<max_ele+1;i++){
		if(arrMap[i] == 0)
			continue;
		cout<<i<<" "<<arrMap[i]<<endl;
	}
	return 0;
}	
