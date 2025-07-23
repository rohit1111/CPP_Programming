#include <iostream>
#include <vector>
using namespace std;

class NumArray {
public:
    vector<int> prefixSum;
    NumArray(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        prefixSum.resize(n,0);
        for(int i=0;i<n;i++){
            sum = sum + nums[i];
            prefixSum[i] = sum;
        }
    }
    
    int sumRange(int left, int right) {
        if(left == 0){
            return prefixSum[right];
        }else{
            return prefixSum[right] - prefixSum[left -1];
        }
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
int main(){
	//HW: Range sum query
	vector<vector<int>> nums = {{-2,0,3,-5,2,-1},{0,2},{2,5},{0,5}};
	NumArray* obj = new NumArray(nums[0]);
	for(int i=1;i<nums.size();i++){
		int left = nums[i][0];
		int right = nums[i][1];
		cout<<obj->sumRange(left,right) <<" ";
	}
	return 0;
}
