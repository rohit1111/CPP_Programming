#include <iostream> 
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		Node(int d){
			data = d;
			next = NULL;
		}
};
class Queue{
	public:
		Node* head;
		Node* tail;

		Queue(){
			head = NULL;
			tail = NULL;
		}

		void push(int x){
			Node* newNode = new Node(x);
			if(isEmpty()){
				head = newNode;
				tail = newNode;
			}
			else{
				tail->next = newNode;
				tail = newNode;
			}
		}
		bool isEmpty(){
			if(head == NULL && tail == NULL){
				return true;
			}
			else{
				return false;
			}
		}
		int front(){
			if(isEmpty())
				return -1;
			else
				return head->data;
		}
		void pop(){
			if(!isEmpty()){
				head = head->next;
				if(head == NULL)
					tail = NULL;
			}
		}
};
int main() {
	Queue* q = new Queue();
	q->push(1);	
	q->push(3);
	q->push(2);

	cout<<q->front()<<" ";
	q->pop();
	cout<<q->front()<<" ";
	q->push(4);

	q->pop();
	cout<<q->front()<<" ";

	q->pop();
	cout<<q->front()<<" ";

	q->pop();
	cout<<q->front()<<" ";	

	return 0;
}
