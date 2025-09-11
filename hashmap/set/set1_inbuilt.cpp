#include <iostream>
#include <set>
//#include <unordered_set>
using namespace std;

int main(){
	set<int> s;
	//unordered_set<int> s;

	s.insert(1);
	s.insert(10);
	s.insert(15);
	s.insert(2);

	for(auto i:s){
		cout<<i<<" ";
	}
	cout<<endl;
	cout<<s.size()<<endl;
	s.erase(10);
	for(auto i:s){
		cout<<i<<" ";
	}
	cout<<endl;
	cout<<s.size()<<endl;


	auto it = s.find(15);
	//cout<<*it;
	if(it == s.end())
		cout<<"Not Present"<<endl;
	else
		cout<<"Prestent: "<<*it<<endl;
	return 0;
}
