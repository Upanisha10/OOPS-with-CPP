#include<bits/stdc++.h>
using namespace std;

//creation of a class
//Class is a prototype for building multiple variates

class Person{
public:
	string name;
	void Display()
	{
		cout<<"Hi, I am "<<name<<endl;
	}
};
int main()
{
    //Object is an instance of a class
    //Creation of object
    //first way->uses stack memory space

    Person P1;
    P1.name = "Upanisha";
    P1.Display();

    //Second way-> uses heap memory space
    //dynamic memory allocation

    Person *P2 = new Person;
    P2->name = "Durga";
    P2->Display(); 
	return 0;
}