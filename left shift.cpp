#include<iostream>
int leftshift(int arr[],int n)
{
	int temp=arr[0];
	for(int i=0;i<n;i++)
	{
		arr[i-1]=arr[i];
	}
	arr[n-1]=temp;
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
	leftshift(arr,n);
		for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
		
	}
}
