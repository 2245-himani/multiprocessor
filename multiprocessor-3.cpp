#include<iostream>
#include<string.h>
using namespace std;
class A
{
	public:
		void drink()
		{
			cout<<"sugarcan juice! "<<endl;
		}
};
class B : public A
{
	public:
		void drink()
		{
			cout<<"chiku juice!"<<endl;
			A a1;
			a1.drink(); 
		}
};
int main()
{
	B b1;
	b1.drink();
	return 0;
}
