#include <iostream>
using namespace std;

int main(){

	//HW: find the average and percentage of 5 subjects
	int subjectOne, subjectTwo, subjectThree, subjectFour, subjectFive;

	cin>>subjectOne>>subjectTwo>>subjectThree>>subjectFour>>subjectFive;

	int totalMarks = subjectOne + subjectTwo + subjectThree + subjectFour + subjectFive;

	double averageMarks = totalMarks/5.0;

	double percentageMarks = (totalMarks/500.0) * 100.0;

	cout<<"Total Marks: "<<totalMarks<<endl;
	cout<<"Average Marks: "<<averageMarks<<endl;
	cout<<"Percentage Marks: "<<percentageMarks<<endl;

	return 0;
}
