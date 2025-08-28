#include <iostream> 
using namespace std;
class Node{
	public:
		int data;
		Node* next;
		Node* prev;

		Node(int x){
			data = x;
			next = NULL;
			prev = NULL;
		}
};
class Deque{
	public:
		
		Node* head;
		Node* tail;
		Deque(){
			head = NULL;
			tail = NULL;
		}

		void push_back(int x){
			Node* newE = new Node(x);
			if(head == NULL && tail == NULL){
				head = newE;
				tail = newE;
			}else{
				tail->next = newE;
				newE->prev = tail;
				tail = newE;
			}
		}

		void push_front(int x){
			Node* newE = new Node(x);
			if(head == NULL && tail == NULL){
				head = newE;
				tail = newE;
			}else{
				newE->next = head;
				head->prev = newE;
				head = newE;
			}
		}

		void pop_back(){
			if(tail != NULL)
				tail = tail->prev;
		}

		void pop_front(){
			if(head != NULL)
				head = head->next;
		}

		int front(){
			return head->data;
		}

		int back(){
			return tail->data;
		}

};
int main() {
	Deque* dq = new Deque();
	dq->push_back(1);
	dq->push_back(3);
	dq->push_front(2);
	dq->push_front(4);

	cout<<dq->front()<<" "<<dq->back()<<endl;
	dq->pop_back();
	dq->pop_front();
	cout<<dq->front()<<" "<<dq->back()<<endl;
	return 0;
}
