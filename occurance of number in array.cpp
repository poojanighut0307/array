#include<stdio.h>
int main()
{
	int a[100], n ,i ,num ,cnt=0;
	printf("enter limit = ");
	scanf("%d",&n);
	printf("\nenter n numbers = ");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nenter num to count = ");
	scanf("%d",&num);
	for(i=0; i<n; i++)
	{
		if(a[i]==num)
		   cnt++;
	}
	printf("\n number count = %d",cnt);
}
