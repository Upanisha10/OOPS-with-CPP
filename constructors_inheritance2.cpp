#include<bits/stdc++.h>
using namespace std;

class Person{
public:
	string name;
	int age;

	Person(string myname, int val)
	{
		name = myname;
        age = val;
	}
};

class Student : public Person{
public:
	string id, college;

	Student(string myname, int val, string myid, string col) : Person(myname, val)
	{
		id = myid;
		college = col;
	}

	Display()
	{
		cout<<name<<" "<<age<<" "<<id<<" "<<college<<endl;
	}
};
int main()
{
    Student S1("Upanisha",18,"05g7","ACOE");
    S1.Display();
}