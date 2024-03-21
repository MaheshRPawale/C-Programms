#include<iostream>
using namespace std;


int main()
{   int i,j;
	int arr1[5];
	int arr2[5];
//	cout<<"Enter Values for Arr1/n";
	for( i=0;i<5;i++)
	{
		//	cout<<"Enter Values for Arr1/n";
			cin>>arr1[i];
	}
		for(int i=0;i<5;i++)
	{
		
		cout<<arr1[i]<<endl;
			arr2[i]=arr1[i];
	
	}
	cout<<"After Copy  array "<<endl;
	for( i=0;i<5;i++)
	{
		
				//cout<<arr2[i];
					cout<<arr2[i];
	}
		//cout<<"After Copy  array "<<arr2[i];
	
	
	
}
