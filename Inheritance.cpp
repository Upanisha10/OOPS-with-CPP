#include<bits/stdc++.h>
using namespace std;
/*Inheritance*/

//Inheritance is the process of accessing public and protected members and functions in a parent/base class by child/derived class

//Type of inheritance can either be public, private or protected
//The type will determine the access mode of the variables that are inherited by the child class

//protected members and functions can be accessed by an inheriting class/child class
class Person{
public:
	string name;
	int age;

	void SetName(string word)
	{
		name = word;
	}
	void SetAge(int val)
	{
		age = val;
	}

};

// specify the parent class and type of inheritance after the child class : 
class Student : public Person
{
    public:
    	int id;

    	void SetId(int val)
    	{
    		id = val;
    	}

    	void Print()
    	{
    		cout<<name<<" "<<age<<" "<<id<<endl;
    	}
};
int main()
{
    Student Upanisha;

    Upanisha.id = 123;
    Upanisha.name = "Upanisha";
    Upanisha.SetAge(18);

    Upanisha.Print();

	return 0;
}