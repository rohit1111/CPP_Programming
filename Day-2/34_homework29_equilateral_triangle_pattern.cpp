#include <iostream>
using namespace std;

int main(){
	//HW: Equilateral triangle (Pyramid) star pattern
	int n;
	cin>>n;
	int star = 1, space = n-1;
	for(int i=1;i<=n;i++){
		for(int j = 1; j<=space;j++){
			cout<<" ";
		}
		for(int j = 1; j<=star;j++){
			cout<<"*";
		}
		cout<<endl;
		star +=2;
		space -=1;
	}
	return 0;
}
