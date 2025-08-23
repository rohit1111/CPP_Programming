#include <iostream>
#include <vector>

using namespace std;
class Queue{

	public:
		int frnt;
		int rare;
		int capacity;
		vector<int> arr;
		Queue(int cap){
			frnt = -1;
			rare = -1;
			capacity = cap;
			arr.resize(cap);
		}
		void push(int data){
			if(isEmpty()){
				frnt = 0;
				rare = 0;
				arr[rare] = data;
			}
			else{
				if((rare + 1)% capacity != frnt){
					rare = (rare + 1) % capacity;
					arr[rare] = data;
				}
			}
		}
		void pop(){
			if(!isEmpty() && frnt != rare){
				frnt = (frnt + 1) % capacity;
			}
		}
		bool isEmpty(){
			return (frnt == -1 && frnt == -1);
		}
		int front(){
			if(isEmpty())
				return -1;
			return arr[frnt];
		}

};
int main() {
	Queue* obj = new Queue(4);
	obj->push(1);
	obj->push(3);
	obj->push(2);

	cout<<obj->front()<<" ";
	obj->pop();
	cout<<obj->front()<<" ";

	obj->push(4);
	obj->pop();
	cout<<obj->front()<<" ";
	obj->pop();
	cout<<obj->front()<<" ";
	obj->pop();
	cout<<obj->front()<<" ";
	return 0;
}
