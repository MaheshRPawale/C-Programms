#include<iostream>
using namespace std;
class Complex
{  public:
	int real;
	int img;
		public:
		Complex()
		{
			
		}
		
		Complex(int real,int img)
		{
		this->img=img;
		this->real=real;
			
		}	
		
		display()
		{
			cout<<real<<"+"<<img<<endl;
		}	
		
		void add(Complex& c1, Complex& ) ;
		
};

void Complex::add(Complex& c1, Complex& c2) 
{
	cout<<c2.real+c2.real<<"+"<<c2.img+c2.img<<"i";
	
}
int main()
{
	Complex c1(20,30);
	Complex c2(10,20);
	c1.add(c1,c2);
}

