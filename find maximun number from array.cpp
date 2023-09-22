#include<stdio.h>
int main()
{
	int a[100], i, n,max;
	printf("enter limit = ");
	scanf("%d",&n);
	printf("\n enter n numbers = ");
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);
	
	max=a[0];
	for(i=0; i<n; i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	printf("\n maximum number = %d",max);
}
