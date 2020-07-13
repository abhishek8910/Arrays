#include<iostream>
using namespace std;
int movezeroes(int arr[],int n)
{
	int c=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=0)
		{
		swap(arr[i],arr[c]);
		
			c++;
		}
	}
	 
} 


int main()
{
	int i,arr[100];
	int n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	movezeroes(arr,n);
		for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
		
	}
}
