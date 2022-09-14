#include<iostream>
using namespace std;
class student
{
	public:
		int rno;
		string name="red and white";
		
		void display()
		{
			cout<<rno<<name;
		}
};
int main()
{
student s1;

	cout<<"enter student roll no and name";
	cin>>s1.rno;
	cin>>s1.name;
	
	s1.display();
	return 0;
}
