#include<iostream>
#include<string.h>
using namespace std;

class mycl
{
	public:
	void my1()
	{
		cout<<"function with 0 argument :  "<<endl;	
	}
	void my2(int ny)
	{
		cout<<"function with 1 argument :  "<<ny<<endl;
	}
	void my3(int ny,int ny1)
	{
		cout<<"Function with 2 argument :  "<<ny<< " " <<ny1<<endl;
	}
	void my4(int ny,int ny1,int ny2)
	{
		cout<<"functionk with 3 agrument :  "<<ny<< " " <<ny1<<" "<<ny2<<endl;
	}
};

int main()
{
	mycl m1;
	m1.my1();
	m1.my2(1);
	m1.my3(2,3);
	m1.my4(4,5,6);
	return 0; 
}
