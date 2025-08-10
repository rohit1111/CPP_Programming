#include <iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
		Node(int x){
			data = x;
			next = NULL;
		}
};
class Stack{
	public:
		Node* head;
		Stack(){
			head = NULL;
		}
		void push(int x){
			Node* newNode = new Node(x);
			newNode->next = head;
			head = newNode;
		}
		void pop(){
			head = head->next;
		}
		int top(){
			return head->data;
		}
		int size(){
			int ans = 0;
			Node* temp = head;
			while(temp!=NULL){
				temp = temp->next;
				ans++;
			}
			return ans;
		}
};
int main() {
	Stack* obj = new Stack();
	obj->push(1);
	obj->push(3);
	obj->push(5);

	while(obj->size() > 0){
		cout<<obj->top()<<" ";
		obj->pop();
	}

	return 0;
}
