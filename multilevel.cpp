#include<iostream>
using namespace std;
class vehicle
{
	public:
	vehicle(){
		cout<<"this is vehicle"<<endl;
	}
};
class engine
{
public:
engine(){
	cout<<"every vehicle have engine"<<endl;
}
};
class color
{
	public:
		color()
		{
			cout<<"this is yellow colour"<<endl;
		}
};
class threewheel:public vehicle
{
	public:
	threewheel(){
		cout<<"three wheeler"<<endl;
	}	
};
class fourwheel: public vehicle
{
	public:
	fourwheel(){
		cout<<"four wheeler"<<endl;
	}
};
class jeep :public fourwheel,public engine
{	
public:
	jeep()
	{
		cout<<"details of jeep"<<endl;
	}
};
class rickshow :public threewheel,public color
{
	public: 
	rickshow()
	{
	cout<<"details of rickshow"<<endl;	
}
};
int main()
{
	jeep obj;
	rickshow ric;
	return 0;
	
}
