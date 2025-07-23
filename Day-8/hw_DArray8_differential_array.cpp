#include <iostream>
#include <vector>
using namespace std;

int main(){
	//HW: Differential array.
	/*
	Input

	5
	1 2 3 4 5
	3
	0 3 10
	1 4 -5
	0 2 10
	Your output

	21 17 18 9 0 
	*/
	int n;
	cin>>n;

	vector<int> nums(n,0);
	for(int i=0;i<n;i++){
		cin>>nums[i];
	}

	int q;
	cin>>q;

	vector<int> diff(n+1,0);
	for(int i=0;i<q;i++){
		int l;
		cin>>l;
		int r;
		cin>>r;
		int val;
		cin>>val;
		diff[l] += val;
		diff[r+1] -= val;
	}
	int sum = 0;
	for(int i =0;i<n;i++){
		sum += diff[i];
		nums[i] += sum;
	}

	for(int i:nums){
		cout<<i<<" ";
	}
	return 0;
}
