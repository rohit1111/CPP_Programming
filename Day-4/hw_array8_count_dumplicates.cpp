#include <iostream>
using namespace std;

int main(){
	//HW: Count dumplicate elemnets
	int n = 7;
	int nums[n] ={1,1,2,3,4,2,5};

	int max =0;
	for(int i:nums){
		if(max < i)
			max =i;
	}
	int freqArray[max+1]={0};

	for(int i:nums){
		freqArray[i]++;
	}

	int count =0;
	for(int i:freqArray){
		if(i>=2){
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
