#include<bits/stdc++.h>
using namespace std;
class Person{
public:
	static int count;
	Person()
	{
		count++;
	}
	void Display()
	{
		cout<<"count value: "<<count<<endl;
	}
};
int Person::count = 0;
int main()
{
   Person P1;
   Person P2;
   Person P3;
   P1.Display(); 
   return 0;
}