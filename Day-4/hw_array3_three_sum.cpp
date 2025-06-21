#include <iostream>
#include <vector>
using namespace std;
 vector<vector<int>> threeSum(vector<int>& nums) {
        int size = nums.size();
        vector<vector<int>> result = {};
        for(int i=0;i<size;i++){
            for(int j=i;j<size;j++){
                if(i!=j){
                    for(int k=j;k<size;k++){
                        if(j!=k){
                            if(nums[i] + nums[j] + nums[k] == 0)
                                result.push_back({nums[i],nums[j],nums[k]});
                                break;
                        }
                    }
                }
            }
        }
        return result;
    }
int main(){
	//HW: Three sum
	//I/P: -1,0,1,2,-1,-4, target = 0
	int n = 6;
	int arr[n] = {-1,0,1,2,-1,-4};
	//0,1,1, 0,0,0
	//int arr[n] = {0,0,0};
	int target = 0;

	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(i!=j){
				for(int k=j;k<n;k++){
					if(j!=k){
						if(arr[i] + arr[j] + arr[k] == 0)
							cout<<arr[i]<<" "<<arr[j] <<" " <<arr[k]<<endl;
							break;
					}
				}
			}
		}
	}

	//using FUnction: vectors
	vector<int> nums = {-1,0,1,2,-1,-4};
	vector<vector<int>> result = {};
	result = threeSum(nums);
	for(vector<int> i:result){
		for(int k:i){
			cout<<k<<" ";
		}
		cout<<endl;
	}
	return 0;
}
