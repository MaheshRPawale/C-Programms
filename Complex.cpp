#include<iostream>
using namespace std;
class complex
{
	int real;
	int img;
	public:
		void display()
		{
			cout<<"real==="<<real<<"IMG==" <<img<<endl;
			
		}
		
		complex(int r, int i)
		{
		real=r;
		img =i;
		}
		complex add(complex &c)
		{
			complex temp;
			temp.real=this->real+c.real;
			temp.img=this->real+c.img;
			return temp;
		}
};
int main()
{
  complex c1(11,22);
  complex c2(23,24);
  complex c3=c1.add(c2);
 	c3.display();
}

