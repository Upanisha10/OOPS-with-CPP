#include<iostream>
using namespace std;
class Person{
public:
	string name, aadhar;
	int age;
	Person(string myname, string myaadhar, int val)
	{
		name = myname;
		aadhar = myaadhar;
		age = val;
	}
};
class Father: public Person{
public:
	string surname, eyecolor, bloodgrp;
	Father(string myname, string myaadhar, int val,string mysur, string eye, string grp):Person(myname,myaadhar,val)
	{
		surname = mysur;
		eyecolor = eye;
		bloodgrp = grp;
	}

};
class Child : public Father{
public:
	Child(string myname, string myaadhar, int val, string mysur, string eye, string grp): Father(myname,myaadhar,val,mysur,eye,grp){}
	void Display()
	{
		cout<<name<<" "<<aadhar<<" "<<age<<" "<<surname<<" "<<eyecolor<<" "<<bloodgrp<<endl;
	}

};

int main()
{
	Child C1("Upanisha","1233",18,"Degala","brown","B-");
	C1.Display();
}