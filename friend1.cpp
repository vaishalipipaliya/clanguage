#include<iostream>
using namespace std;
class dist
{
private:
int met;

public:
	dist(int m)
	{
	met=m;
	}
	void operator+(dist);
};
void dist::operator+(dist d)
{
	int m=met+d.met;
	cout<<"addition is"<<m;
}
int main()
{
	dist D(12);
	dist D1(13);
	D+D1;
	return 0;
}
