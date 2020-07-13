#include<stdio.h>
int insert(int arr[],int n,int pos,int x)
{	n++;
	int index=pos-1;
	int i=0;
	for(i=n-1;i>=index;i--)
	{
		arr[i+1]=arr[i];
	
		}
		arr[index]=x;

	
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
	printf("Enter the position you want to enter:\n");
	scanf("%d",&pos);
	printf("Enter the element you want to insert:\n");
	scanf("%d",&x);
	insert(A,n,pos,x);
	printf("Elements after insertion are:\n");
	for(i=0;i<n+1;i++)
	{
	
		printf("%d ",A[i]);

}
return 0;
}
