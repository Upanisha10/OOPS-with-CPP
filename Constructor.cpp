#include<bits/stdc++.h>
using namespace std;

// A constructor is a function that is automatically called when an object is created.
// It has no return type.
// It can have arguments(parameterised) or no arguments at all

//So, it can be used to do work that is common to all objects like initialising values
class Person{
private:
	string name;
	int age;
public:
	//To solve the problem of writing multiple constructors, we can use a default constructor
	//A default constructor has default arguments that are initialised to the object and are overwritten when we call the object with actual arguments
	Person(val = 0, word = "Default")
	{
        name = word;
        age = val;
	}
	Person()
	{
        age = 0;
        name = "Default";
	}
	Person(int val, string word)
	{
        age = val;
        name = word;
	}
	Person(int val)
	{
        age = val;
        name = "Default";
	}
	Person(string word)
	{
        age = 0;
        name = word;
	}
	Person(Person &P1)//copy constructor accepts the address of another object
	{
		age = P1.age;
		name = P1.name;
	}
	void Display()
	{
		cout<<name<<" "<<age<<endl;
	}

};
//Constructor Overloading: same function name and different types of arguments
//Based on the arguments passed to the function, constructor/function is executed.
int main()
{

	Person P1(18,"Upanisha");
	Person P2(18);
	Person P3("Upanisha");
	Person P4(P1); //Copy constructor 

	P1.Display();
	P2.Display();
	P3.Display();
	P4.Display();
	return 0;
}
