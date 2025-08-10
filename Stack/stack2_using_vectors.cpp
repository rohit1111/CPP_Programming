#include <iostream>
#include <vector>
using namespace std;
class Stack{
	public:
		vector<int> arr;
		Stack(){
			arr.clear();
		}
		void push(int x){
			arr.push_back(x);
		}
		int top(){
			return arr[arr.size() - 1];
		}
		void pop(){
			arr.pop_back();
		}
		int size(){
			return  arr.size();
		}
};
int main() {
	Stack* obj  = new Stack();
	obj->push(1);
	obj->push(3);
	obj->push(2);

	while(obj->size() > 0){
		cout<<obj->top()<<endl;
		obj->pop();
	}

	return 0;
}
