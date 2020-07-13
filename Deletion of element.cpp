#include<stdio.h>
int deleteele(int arr[],int n,int x)
{
	int i;
	for(i=0;i<n;i++)
	{
	if(arr[i]==x)
	{
		break;
	}
	
	}
	if(i==n){
		return n;
		}
		for(int j=i;j<n-1;j++)
		{
			arr[j]=arr[j+1];
			
		}
		return (n-1);
}
int main()
{
		int i,n,A[100],x,pos;
	printf("Enter the number of array:\n");
	scanf("%d",&n);
	printf("Enter the elements of array:\n");
	for(i=0;i<n;i++)
	{
	

	scanf("%d",&A[i]);

	}

	printf("Enter the element you want to delete:\n");
	scanf("%d",&x);
	deleteele(A,n,x);
	printf("Elements after deletion are:\n");
	for(i=0;i<n-1;i++)
	{
	
		printf("%d ",A[i]);

}
}
