#include <iostream>
#include <vector>
#include <map>
using namespace std;

int mostFrequentEven(vector<int>& nums){
	int n = nums.size();
	map<int,int> m;
	for(int i=0;i<n;i++){
		if(nums[i]%2 == 0)
			m[nums[i]]++;
	}

	int answer = (int)-1e9;
	int key = 0;
	for(auto element:m){
		//element.first = key
		//element.second = value
		//answer = max(answer,element.second);
		if(answer < element.second){
			answer = element.second;
			key = element.first;
		}
	}
	return key;
}

int main(){
	vector<int> nums = {8,1,8,1,2,3,4,8};
	cout<<mostFrequentEven(nums);
	return 0;
}
