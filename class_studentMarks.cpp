#include<iostream>
using namespace std;

class MyName
{
	
	char* Name;
	int length,*Marks,subjects;
	
	public:
	
    void setname()
    {	
    	cout<<"Enter length of your name: ";
    	cin>>length;
    	
    	Name = new char[length];
    	cout<<"Enter your name :"<<endl;
		cin>>Name;
		

	} 
	
	void setmarks()
    {	
    	cout<<"Enter length of your Marks: ";
    	cin>>subjects;
    	
    	Marks = new int [subjects];
    	cout<<"Enter your marks :"<<endl;
		for(int i=0;i<subjects;i++)
		{
		    cin>>Marks[i];
		  
	    }

	}
	
	void display()
	{
		cout<<"Name is :"<<Name<<endl;
		
		cout<<"Marks are :"<<endl;
		for(int i=0;i<length;i++)
		{
			cout<<Marks[i]<<endl       ;
		}
	}

};
int main()
{
	MyName obj;
	obj.setname();
	obj.setmarks();
	obj.display();
	
	return 0;
	
}
