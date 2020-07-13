#include<stdio.h>
int max(int arr[],int n)
{
	int max=0;

	for(int i=1;i<n;i++)
	{
		if(arr[i]>max)
		{
			;
			max=arr[i];
			
		}
		
	}
	return max;
	
}
int main()
{
	int i,arr[100],n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	int c=max(arr,n);
	printf("%d",c);
	return 0;
}
