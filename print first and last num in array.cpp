#include<stdio.h>
#include<stdlib.h >
int main()
{
	int a[100], i, n;
	printf("enter limit = ");
	scanf("%d",&n);
	printf("enter numbers = ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);		
	}
	printf("\n first number = %d",a[0]);
	printf("\n last number = %d",a[n-1]);
}
