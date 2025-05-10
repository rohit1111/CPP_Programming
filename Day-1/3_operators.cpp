#include <iostream>

using namespace std;

int main(){
	double  a = 9;
	int b = 2;
	/*
	** Arithmatic operators
	** + : Addition
	** - : Substraction
	** * : Multiplication
	** % : Modulo 
	*/
	cout<<a/b <<endl;
	cout<<7%3 << endl;
	cout<<8%3 << endl;
	cout<<9%3 << endl;
	cout<<10%3 << endl;
	cout<<11%3 << endl;
	cout<<12%3 << endl;

	/*
	** Assignment operators
	** = : equal to
	** += 
	** -= 
	** (*)/ 
	*/
	int a1 = 10;
	cout<<a1<<endl;
	a1 +=4;
	cout<<a1<<endl;
	a1 -=10;
	cout<<a1<<endl;
	a1 *= 2;
	cout<<a1<<endl;
	a1 /= 3;
	cout<<a1<<endl;
	/*
	** Relational operators
	** == equal to equal to
	** != : Not equal to
	** < : Lesss than
	** > : Greater than
	** <= : Less than  or equal to
	** >= : Greater than  or eqaul to
	*/
	cout <<(a==b)<<endl;
	cout <<(a!=b)<<endl;
	cout <<(a<b)<<endl;
	cout <<(a>b)<<endl;
	cout <<(a<=b)<<endl;
	cout <<(a>=b)<<endl;

	/*
	** Logical operators
	** && : and
	** || :  or 
	** ! :  not
	** ++ : increment(pre/post)
	** -- : decrement(pre/post)
	*/

	cout<<((a==b)&&(a!=b))<<endl;
	cout<<((a==b)||(a!=b))<<endl;
	cout<<(!(a==b))<<endl;
	cout<<a++<<endl;
	cout<<a<<endl;

	cout<<++a<<endl;
	cout<<a--<<endl;
	cout<<a<<endl;
	cout<<--a<<endl;
	return 0;
}
