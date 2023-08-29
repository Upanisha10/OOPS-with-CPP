#include<bits/stdc++.h>
using namespace std;

class Person{
public:
	string name;
	void Display();// function declaration done inside class
};
//defining the function outside the class using scope resolution operator

//Without scope resolution operator, the methods defined outside the class will not work on objects
void Person::Display()
{
    cout<<"Hi, I am "<<Person::name<<endl;
}
int main()
{
    Person P1;
    P1.name = "Upanisha";
    P1.Display();

    Person *P2 = new Person;
    P2->name = "Durga";
    P2->Display(); 
	return 0;
}