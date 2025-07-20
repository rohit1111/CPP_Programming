#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maximumSumSubarray(vector<int>& arr, int k) {
	int n = arr.size();
	int i=0;
	int j=k;
	
	int sum=0;
	int ans=0;
	
	while(i<k){
		sum +=arr[i];
		i++;
	}
	ans = max(ans,sum);
	while(i<n){
		sum += arr[i];
		sum -= arr[i-k];
		ans = max(ans,sum);
		i++;
	}
	
	return ans;
}
int main(){
	//HW: Maximum subarray sum of size k
	vector<int> nums = {100,200,300,400};
	int k = 2;
	int result = maximumSumSubarray(nums,k);
	cout<<result<<endl;
	return 0;
}
