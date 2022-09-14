#include<iostream>
using namespace std;
class student
{
	private:
	int  roll_no;
	public:
		
	student(int r)
	{
	roll_no=r;
	}	
	int getrollno()
	{
		return roll_no;
	}
};
int main(){
student st(10);
cout<<st.getrollno();
	return 0;
}
