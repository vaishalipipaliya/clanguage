#include<iostream>
using namespace std;
class dist
{
private:
	int  met;

	friend int addmet(dist);
public:
	dist()
    {
	met=10;
	}	
};
int addmet(dist d)
{
	d.met+=5;
}
int main()
{
	dist d;
	cout<<"distance is "<<addmet(d);
	return 0;
}
