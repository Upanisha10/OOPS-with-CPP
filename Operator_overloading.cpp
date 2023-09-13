#include<bits/stdc++.h>
using namespace std;
// Operator overloading
//We change the way operators work for user-defined types such as classes and structures
// We use special operator function

//Operators that cannot be overloaded : scope resolution, ternary operator, member selection operator
class Complex{
public:
	int x,y;
	Complex(int a, int b)
	{
		x = a;
		y = b;
	}
	Print()
	{
		cout<<x<<"+"<<y<<"i"<<endl;
	}
	Complex operator+(Complex &A1)
	{
		Complex temp(0,0);
		temp.x = A1.x + x;
		temp.y = A1.y + y;
		return temp;
	}

};
int main()
{
   Complex A1(2,3);
   A1.Print();
   Complex A2(5,6);
   A2.Print();
   Complex A3(0,0);
   A3 = A2 + A1;
   A3.Print();

}