#include<iostream>
using namespace std;

class Demo
{
	public:
	int x;
	int y;
	
	Demo(int a=10,int b=20)
	{
		x=a;
		y=b;
	}
};

int main()
{
	Demo obj1;
	Demo obj2(11);
	Demo obj3(11,12);
	
	return 0;
}