#include<iostream>
using namespace std;
class complex
{
	int real;
	int img;
	
	public :
		complex(int i,int r)
		{
			real=r;
			img=i;
		}
		void display()
		{
			cout<<"Complex No is "<<real<<"img no"<<img<<endl;
		}
       add(complex & c)
		{
			complex temp;
			temp.real=this->real +c.real;
			temp.img=this->img+ c.img;
			return temp;
		}
};
int main()
{
	complex c1(1,2);
	complex c2(3,4);
	complex c3=c1.add(c2);
	c3.display();
}
