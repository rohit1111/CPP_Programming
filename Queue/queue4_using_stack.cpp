#include <iostream>
#include <stack>

using namespace std;
class Queue{
	public:
		stack<int> st1;
		stack<int> st2;

		Queue(){

		}	

		void push(int x){
			while(!st1.empty()){
				st2.push(st1.top());
				st1.pop();
			}
			st1.push(x);
			while(!st2.empty()){
				st1.push(st2.top());
				st2.pop();
			}
		}

		void pop(){
			//remove
			if(!st1.empty())
				st1.pop();
		}

		int front(){
			if(st1.empty())
				return -1;
			else
				return st1.top();
		}
};
int main() {
	Queue* obj = new Queue();
	obj->push(1);
	obj->push(3);
	obj->push(2);
	cout<<obj->front()<<" ";
	obj->pop();
	cout<<obj->front()<<" ";
	obj->pop();
	cout<<obj->front()<<" ";
	obj->pop();
	cout<<obj->front()<<" ";
	return 0;
}
