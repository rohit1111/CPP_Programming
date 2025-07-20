#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {

	int sizea = nums.size();
	int i = 0;
	int j = sizea-1;
	//cout<<sizea<<endl;
	vector<pair<int, int>> mappingIndex;
	for(int i=0;i<nums.size();i++){
		mappingIndex.push_back({i,nums[i]});
	}

	sort(nums.begin(),nums.end());

	while(i<j){
		if(nums[i] + nums[j] == target){
			//return {nums[i],nums[j]};
			break;
		}
		else if(nums[i] + nums[j] > target){
			j--;
		}
		else{
			i++;
		}
	}
	vector<int> result = {};
	for(int k=0;k<nums.size();k++){
		if(nums[i] == mappingIndex[k].second){
			result.push_back(mappingIndex[k].first);
			break;
		}
	}
	for(int k=0;k<nums.size();k++){
		if(nums[j] == mappingIndex[k].second){
			result.push_back(mappingIndex[k].first);
			break;
		}
	}
	return result;
}
int main(){
	//HW: 2-Sum in sorted array and return indices if available
	//vector<int> nums = {1, 8, 17, 20, 31};
	vector<int> nums = {3,2,4};
	int target = 6;

	vector<int> result = twoSum(nums, target);
	for(int i:result){
		cout<<i<<" ";
	}
	return 0;
}
