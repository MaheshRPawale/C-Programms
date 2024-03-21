#include<iostream>
using namespace std;
int main()
{
 	
   char *ptr;
   int len=10;
  ptr =new char[len];
   cout<<"Enter your name ";
   cin>>ptr;
   cout<<"name is :"<<ptr;
   
   delete[] ptr;
}
