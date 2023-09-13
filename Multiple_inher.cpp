#include<iostream>
using namespace std;
class Person{
public:
	string name;
	string aadhar;
	int age;

	Person(string myname, string myaadhar, int val)
	{
		name = myname;
		aadhar = myaadhar;
		age = val;
	}
};

class Father{

public:
	string surname, houseno,place;

	Father(string mysur, string hno, string myplace)
	{
		surname = mysur;
		houseno = hno;
		place = myplace;
	}

};

class Child : public Person, public Father{
public:

	Child(string myname, string myaadhar, int val, string sur, string hno, string myplace): Person(myname, myaadhar,val), Father(sur, hno, myplace){}

	void Display()
	{
		cout<<name<<" "<<aadhar<<" "<<age<<" "<<surname<<" "<<houseno<<" "<<place<<endl; 
	}
};
int main()
{
     Child C1("Upanisha","123443211234",18,"Degala","123-14","Guntur");
     C1.Display();
}