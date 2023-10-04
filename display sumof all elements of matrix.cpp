#include<stdio.h>
int main()
{
	int a[10][10],r,c,i,j,s=0;
	printf("enter number of row and colums = ");
	scanf("%d%d",&r,&c);
	printf("\n enter matrix = ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			s=s+a[i][j];
		}
	}
	printf("\n sum of all elements = %d",s);

}
