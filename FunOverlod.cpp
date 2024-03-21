#include<iostream>
using namespace std;
 
 
 void fun1(int a,int b)
 {
 	cout<<"Frist is int "<<a<<"Second is int "<<b<<endl;
 }
 
 void fun1(float a,int b)
 {
 	cout<<"Frist is int "<<a<<"  Second is int "<<b<<endl;
 }
 
 void fun1(double a,float b)
 {
 	cout<<"Frist is int "<<a<<"  Second is int "<<b<<endl;
 }
 
 void fun1(double a,int  b)
 {
 	cout<<"Frist is int "<<a<<" Second is int "<<b<<endl;
 }
 
 void fun1(char a,bool b)
 {
 	cout<<"Frist is int "<<a<<"  Second is int "<<b<<endl;
 }
 
int main()
{    fun1 (11,222);
		fun1(22.3f,33);
	fun1(22.3, 33.4f);
	 fun1(33.3,4);
	fun1('e',true);
	//void fun1('M',true);	
//	void fun1(105.44,11);
// 	void fun1(11.4,99);
//	void  fun1(45.5, 99.9);
//	void fun1( 1, 2);
}
