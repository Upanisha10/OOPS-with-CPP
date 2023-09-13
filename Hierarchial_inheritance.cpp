#include<bits/stdc++.h>
using namespace std;
class Person{
public:
	string name;
	int age;
	string aadhar;

	Person(string myname, int val, string myaadhar)
	{
		name = myname;
		age = val;
		aadhar = myaadhar;
	}

};

class Student : public Person{
public:
	string roll, college;

	Student(string myname, int val, string myaadhar, string id, string col) : Person(myname,val,myaadhar)
	{

		roll = id;
		college = col;

	}

	void Display()
	{
		cout<<name<<" "<<age<<" "<<aadhar<<" "<<roll<<" "<<college<<endl;
	}
};

class Employee : public Person{
public:
	float salary;
	string login;

	Employee(string myname, int val, string myaadhar, float sal, string loginid) : Person(myname,val,myaadhar)
	{

		salary = sal;
		login = loginid;
	}
	void Display()
	{
		cout<<name<<' '<<age<<' '<<aadhar<<" "<<salary<<' '<<login<<endl;
	}
};
int main()
{
   
    Student S1("Upanisha",18,"123443316754","05g7","ACOE");
    S1.Display();

    Employee E1("Durga",35,"123443218765",12000,"Durga@123");
    E1.Display();

}