#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>> result ={};
    int size = nums.size();
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            if(i!=j){
                for(int k=j;k<size;k++){
                    if(j!=k){
                        for(int l=k;l<size;l++){
                            if(k!=l){
                                if(nums[i]+nums[j]+nums[k]+nums[l] == target){
                                        result.push_back({nums[i],nums[j],nums[k],nums[l]});
										break;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return result;
}
int main(){
	//FourSum = nums[a] + nums[b] + nums[c] + nums[d] == target
	//a, b, c, and d are distinct.
	//return an array of all the unique quadruplets

	//The bleow code not return the one condition: all the unique quadruplets e.g arr = {2,2,2,2,2}; o/p: [[2,2,2,2]]
	vector<int> arr = {1,0,-1,0,-2,2};
	vector<vector<int>> result = {};
	int target = 0;
	result = fourSum(arr,target);
	for(vector<int> i:result){
		for(int j:i){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}
