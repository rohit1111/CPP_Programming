#include <iostream>
#include <queue>

using namespace std;

int main(){
	//queue<datatype> queueName;
	queue<int> q;

	//Insert the element
	q.push(1);
	q.push(3);
	q.push(2);

	//cout<<q.front()<<endl;
	//q.pop();
	//cout<<q.front()<<endl;
	while(q.size()>0){
		//Find the topmost element
		cout<<q.front()<<" ";
		//Remove the topmost element
		q.pop();
	}
	return 0;
}
