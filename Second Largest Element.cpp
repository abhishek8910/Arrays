#include<stdio.h>
int secondlar(int arr[],int n)
{
	int max=0;
	int secondmax=0;
	for(int i=1;i<n;i++)
	{
		if(arr[i]>max)
		{
			secondmax=max;
			max=arr[i];
			
		}
		else if(arr[i]>secondmax && arr[i]!=max)
		{
			secondmax=arr[i];
			
		}
	}
	return secondmax;
	
}
int main()
{
	int i,arr[100],n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	int c=secondlar(arr,n);
	printf("%d",c);
	return 0;
}
