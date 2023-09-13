#include<bits/stdc++.h>
using namespace std;
// Polymorphism is the ability to have many forms
// 1.Compile time Polymorphism
// 2.Run time polymorphism

//Function Overloading (compile-time) : many function having the same name but different 
//number of parameters or type of arguments
//Example : sqrt() function can take int type, double and float type. So, sqrt() function is overloaded.
class Example{
public:
	//Here, the add function is overloaded
	void add(int x,int y)
	{
		cout<< x+y << endl;
	}
	void add(int x, int y, int z)
	{
		cout << x+y+z << endl; 
	}

};
int main()
{
   
   Example A1;
   A1.add(10,20);
   A1.add(10,20,30);
}