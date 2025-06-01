#include  <iostream>
using namespace std;

//pass by reference
void square(int &num){
	num = num * num;
}

//pass by value
void modify(int num){
	num = num * num;
}
int main(){

	int number;
	cin>>number;
	modify(number);
	square(number);

	cout<<"Num: "<<number;
	return 0;
}
