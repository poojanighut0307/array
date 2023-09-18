#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[100],i,n,s=0;
	printf("enter limit = ");
	scanf("%d",&n);
	printf("\n enter number = ");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		s=s+a[i];
	}
	printf("\n sum of array elements = %d",s);
}
