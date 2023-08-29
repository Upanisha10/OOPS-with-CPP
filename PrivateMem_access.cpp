#include<bits/stdc++.h>
using namespace std;
class Person{
private:
	string name;
	int age;
	//private members cannot be accessed outside the class
    //Inorder to access and modify these private members, we define getters and setters
    //They are public methods that can be accessed outside the class
public:
    void SetData(int val, string word)
    {
    	name = word;
    	age = val;
    }
    void GetData()
    {
    	cout<<"Hi, I am "<<name<<" and I am "<<age<<" years old.";
    }

};
int main()
{
    Person P1;
    P1.SetData(18,"Upanisha");
    P1.GetData();
	return 0;
}