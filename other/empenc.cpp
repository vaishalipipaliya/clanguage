#include<iostream>
using namespace std;
class emp
{
	public:
		int id;
		string name;
		float salary;
				
		emp(int id1,string name1,float salary1)
		{
			this->id= id1;
			this->name=name1;
			this->salary=salary1;
		
		}
			void display()
			{
				cout<<id<<" "<<name<<" "<<salary;
			}
};
int main()
{
	emp e1=emp(101,"john",20000);
	e1.display();
		return 0;
}
