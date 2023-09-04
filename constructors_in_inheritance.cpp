#include<bits/stdc++.h>
using namespace std;

//creating an object ---->  Base-->child
//destroying the object -----> child-->Base
class Person{
public:

	Person()
	{
		cout<<"constructor of Base class is called"<<endl;
	}
	~Person()
	{
		cout<<"deconstructor of Base class is called"<<endl;
	}
};
class Student : public Person{
public:

	Student()
	{
		cout<<"constructor of child class is called"<<endl;
	}
	~Student()
	{
		cout<<"deconstructor of child class is called"<<endl;
	}
};
int main()
{
	Student S1;
}