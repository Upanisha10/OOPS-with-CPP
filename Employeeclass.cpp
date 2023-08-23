#include<iostream>
using namespace std;
class Employee{
	public:
		string empid,name;
		float salary;
		string cred;
		float base, incometax;
		
		// constructor of class Employee
		Employee(string id, string n, float sal, string creden)
		{
		    empid = id;
			name = n;
			salary = sal;
			cred = creden;	
		}
		
		// Display employee details
		void display()
		{
			cout<<"Displaying employee details"<<endl;
			cout<<empid<<endl<<name<<endl<<salary<<endl<<cred;
		}
		
		//Member function to check the login credentials of Employee
		void Check_Credential(string login)
		{
		    if(login == cred)
		    {
		    	cout<<"Login successful";
			}
			else cout<<"Invalid credentials";
		}
	private:
		float total_salary;
		//private member function that calculates value of total salary;

		float Calculate_Salary(float base, float incometax)
		{
			total_salary = base - ((incometax*base)/100);
			return total_salary;
		}
	public:
		//public member function to access total salary;
		void Total_Salary(float b, float it)
		{
			float ts = Calculate_Salary(b,it);
			cout<<ts<<endl;
		}
			
};
int main()
{
	//creating object e1
	Employee e1("1237","Durga",4500,"Durga@123");
	
	
	//calling display function for e1
	e1.display();
	
	
	//Trying to check login credentials using Check_Credential() member function
	string login;
	cout<<endl<<"Enter login id: ";
	cin>>login;
	e1.Check_Credential(login);
	
	//Calculating total salary
	cin>>e1.base>>e1.incometax;
	e1.Total_Salary(e1.base,e1.incometax);
	return 0;
}