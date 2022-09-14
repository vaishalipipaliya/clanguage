#include<iostream>
using namespace std;
class student
{private:
	int rno=101,marks=54,marks2;
	public:
		student(int r = 0, int i =0) 
		 {
		 marks = r;
		 marks2 = i;
		 }
	student operator + (student const &obj) 
	{
	   student s1;
       s1.marks = marks+obj.marks;
        
        s1.marks2=marks2+obj.marks2;
        return s1;
    }
    void display()
	{
		cout<<marks<<endl;
		cout<<marks2;
	}
};
int main()
{

	student c1(10, 5), c2(2, 4);
    student c3 = c1 + c2; // An example call to "operator+"
    c3.display();
	
	return 0;
}
