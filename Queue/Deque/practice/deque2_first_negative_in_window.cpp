#include <iostream>
#include <vector>
#include <deque>

using namespace std;
class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
		int n = arr.size();
		int i = 0;
		deque<int> dq;

		while(i<k){
			if(arr[i] < 0){
				dq.push_back(i);
			}
			i++;
		}
		vector<int> ans = {};
		int index  = i;
		while(i<n){
			if(dq.empty()){
				ans.push_back(0);
			}else{
				ans.push_back(arr[dq.front()]);
			}
			index++;

			while(!dq.empty() && dq.front() <= (i-k)){
				dq.pop_front();
			}
			if(arr[i] < 0){
				dq.push_back(i);
			}
			i++;			
		}
			if(dq.empty()){
				ans.push_back(0);
			}else{
				ans.push_back(arr[dq.front()]);
			}		
		return ans;
	}
};

int main() {
	Solution* s1 = new Solution();
	vector<int> arr = {-8, 2, 3, -6, 10};
	int k = 2;
	vector<int> ans = s1->firstNegInt(arr,k);
	for(int i:ans){
		cout<<i<<" ";
	}
	return 0;
}
