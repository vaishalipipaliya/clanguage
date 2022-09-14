#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"constructer invoked\n";
		}
		~A()
		{
			cout<<"destructer invoked";
		}
};
int main()
{
	A a;
	return 0;
}
