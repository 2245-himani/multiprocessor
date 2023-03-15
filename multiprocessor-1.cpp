#include<iostream>
#include<string.h>
using namespace std;
class message
{
	private :
		char arr[];
		public:
			message(char h[])
			{
				strcpy(arr,h);
			}
			void print()
			{
				cout<<"beach ";
			}
			void print(char h[])
			{
				cout<<arr<<" "<<h;
			}
			
};
int main()
{
	message m1("dumass!!!");
	m1.print();
	m1.print("bla bla bla bla bla!@#$%^&*()");
	 return 0;
	
}
