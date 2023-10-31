#include<stdio.h>
int main()
{
	int a[100],n,i,s;
	float avg=1;
	printf("enter limit = ");
	scanf("%d",&n);
	printf("enter n number = ");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	s=0;
	for(i=0; i<n; i++)
	{
		s=s+a[i];
	}
	avg=(s/n);
	
	printf("\n Total sum = %d",s);
	printf("\n Average = %f",avg);	
}
