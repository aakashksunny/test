#include<iostream>
#include<stdio.h>
using namespace std;
/*class test
{
	public:
	virtual void print(){printf("Base\n");}
	};
	class test1:public test
	{
		public:
		void print(){printf("DErivedn");}
		};
		void p(test *t){t->print();}
		int main()
		{
			test t;
			test1 t1;
			
			p(&t1);
			p(&t);
			return 0;
			}
*/
int add(int a,int b)=0;
int main()
{
	cout<<add(2,3);
	return 0;}
