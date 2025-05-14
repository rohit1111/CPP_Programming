#include <iostream>
using namespace std;

int main(){
	//HW: Find area and parimeter of rectangle
	int length, breadth;
	cin>>length>>breadth;

	int areaRectangle = length * breadth;

	int parimeterRectangle = 2 * (length + breadth);

	cout<<"Area of Rechangle: "<<areaRectangle<<endl;
	cout<<"Perimeter of Rectangle: "<<parimeterRectangle<<endl;
}
