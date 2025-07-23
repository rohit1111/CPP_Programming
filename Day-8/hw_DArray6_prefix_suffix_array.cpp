#include <iostream>
#include <vector>
using namespace std;

int main(){
	//HW: Prefix and Suffix Sum of Array.
	vector<int> nums = {1,2,3,4,5,6,7,8,9};
	int n = nums.size();
	cout<<"InputArray:\t\t";
	for(int i=0;i<n;i++){
		cout<<nums[i]<<"\t";
	}
	cout<<endl;

	vector<int> prefixArray(n,0);
	vector<int> suffixArray(n,0);
	int prefixSum = 0, suffixSum = 0;
	for(int i=0;i<n;i++){
		prefixSum = prefixSum + nums[i];
		prefixArray[i] = prefixSum;
	}
	for(int i=n-1;i>=0;i--){
		suffixSum = suffixSum + nums[i];
		suffixArray[i] = suffixSum;
	}
	cout<<"PrefixArray:\t";
	for(int i=0;i<n;i++){
		cout<<prefixArray[i]<<"\t";
	}
	cout<<endl;
	cout<<"SuffixArray:\t";
	for(int i=0;i<n;i++){
		cout<<suffixArray[i]<<"\t";
	}
	return 0;
}
