#include<iostream>
using namespace std;
class Mydate{
	
	int dd,mm,yy;
	public:
		Mydate(){
		};
		
		void display();
		Mydate(int d,int m,int y);

				
};
Mydate::Mydate(int d, int m, int y){
		dd=d;
	mm=m;
	yy=y;
}
void Mydate:: display(){
	
	cout<<dd<<mm<<yy;
}

 
int main()
{
	Mydate obj1;
	obj1.display();
	Mydate obj2(21,3,2000);
	obj2.display();
}
