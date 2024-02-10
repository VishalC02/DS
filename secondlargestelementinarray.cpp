#include<iostream>
using namespace std;
#include<climits>
int main()
{
	int max=INT_MIN,smax=INT_MIN;
	int arr[5]={25,20,3,4,22};
	
	for(int i=0;i<5;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		if(arr[i]<max&&arr[i]>smax)
		{
			smax=arr[i];
		}
		
	}

	cout<<endl<<smax;
	
}