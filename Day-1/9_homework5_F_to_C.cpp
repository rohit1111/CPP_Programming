#include <iostream>
using namespace std;

int main(){
	//HW: Enter temperature in ferenheit and convert it into celcius
	//Formulae: C = (F - 32)* 5/9;

	int temperatureFerenheit;
	cin>>temperatureFerenheit;

	double tempCelcius = (temperatureFerenheit - 32) * 5.0/9.0;
	cout<<"Temperature in Ferenheit: " << temperatureFerenheit << ", Celcius: " << tempCelcius << endl;

}
