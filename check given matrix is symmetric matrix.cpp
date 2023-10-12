#include<stdio.h>
int main()
{
	int a[10][10],r,i,j,f=0;
	printf("enter number of row and colums = ");
	scanf("%d%d",&r);
	printf("\n enter matrix = ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			if(a[i][j]!=a[j][i])
				f=1;
		}
	}
	if(f==0)
		printf("Symmetric matrix... ");
	else
		printf("Not symmetric matrix... ");
}
