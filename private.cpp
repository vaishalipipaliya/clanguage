#include<iostream>
using namespace std;
class student
{
	private:
		int rollno;
		string name;
};
class subject
{
	private:
		student s1[10];	
};
int main()
{
	subject s;
	s.s1[3].rollno=5;
	return 0;
}
