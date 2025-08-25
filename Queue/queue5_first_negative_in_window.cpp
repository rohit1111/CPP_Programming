#include <iostream>
#include <queue>
using namespace std;


class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        int i = 0;
		queue<int> q;
		int n = arr.size();
		while(i<k){
			if(arr[i] < 0){
				q.push(i);
			}
			i++;
		}

		vector<int> ans = {};
		while(i<n){
			if(q.empty()){
				ans.push_back(0);
			}else{
				ans.push_back(arr[q.front()]);
			}

			while(!q.empty() && q.front() <= (i-k)){
				q.pop();
			}
			if(arr[i] < 0){
				q.push(i);
			}
			i++;
		}
		if(q.empty()){
			ans.push_back(0);
		}
		else{
			ans.push_back(arr[q.front()]);
		}
		return ans;
    }
};


int main(){
	//First negative in every window of size k
	//Given an array arr[]  and a positive integer k, find the first negative integer for each and every window(contiguous subarray) of size k.Note: If a window does not contain a negative integer, then return 0 for that window.
	
	//Input: arr[] = [-8, 2, 3, -6, 10] , k = 2
	//Output: [-8, 0, -6, -6]
	//Explanation:
	//Window [-8, 2] First negative integer is -8.
	//Window [2, 3] No negative integers, output is 0.
	//Window [3, -6] First negative integer is -6.
	//Window [-6, 10] First negative integer is -6.
	
	Solution* s1 = new Solution();
	vector<int> arr = {12, -1, -7, 8, -15, 30, 16, 28};//{-8, 2, 3, -6, 10};
	int k = 3;//2;
	vector<int> ans = s1->firstNegInt(arr,k);
	for(int i:ans){
		cout<<i<<" ";
	}
	return 0;
}
