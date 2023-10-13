//calculate the sum of first n terms of the series x+3x+5x.....
#include<stdio.h>
int main()
{
	int x,n,i,k=1,s=0;
	printf("enter value of x = ");
	scanf("%d",&x);
	printf("enter value of n ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		s=s+(k*x);
		k=k+2;
	}
	printf("\n sum of series = %d",s);
}
