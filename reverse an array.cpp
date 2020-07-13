#include<iostream>
using namespace std;
int reverse(int arr[],int n)
{
	int low=0,high=n-1;
	while(low<high)
	{
		swap(arr[low],arr[high]);
		low++;
		high--;
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
	reverse(arr,n);
		for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
		
	}
}
