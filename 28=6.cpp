#include<stdio.h>
int main()
{
	int a[100], n, i, x,y;
	printf("enter limit= ");
	scanf("%d ",&n);
	printf("\n enter n numbers = ");
	for(i=0; i<n; i++)
	{
		scanf("%d ",&a[i]);
	}
	
	printf("\n enter number to find = ");
	scanf("%d ",&x);
	printf("\n enter number to replace = ");
	scanf("%d ",&y);
	for(i=0; i<n; i++)
	{
		if(a[i]==x)
		{
			a[i]=y;
		}
	}
	printf("\n replaced array = ");
	for(i=0; i<n; i++)
	{
		printf("%d \t",a[i]);
	}
}
