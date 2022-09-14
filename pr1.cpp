#include<iostream>
using namespace std;
class student
{
	private:
	int salary;
	
	public:
		student(int s)
		{
			this->salary=s;
		}
//	void setsalary(int s)
//	{
//		this->salary=s;
//	}
	void getsalary()
	{
		cout<<salary<<endl;
	}
};
int main()
{
	student s1=student(10000);
//	for(i=0;i<=2;i++)
//	{
//	cout<<"enter salary";
//	cin>>sal;
//	s1[i].setsalary(sal);
//	}
//	for(int j=0;j<=2;j++)
//	{
//	s1[j].getsalary();
s1.getsalary();
	return 0;
}

