#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],r,c,i,j,ans[10][10];
	printf("enter number of row and colums = ");
	scanf("%d%d",&r,&c);
	printf("\n enter first matrix = ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n enter second matrix = ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			ans[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\n sum of matrix = \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",ans[i][j]);
		}
		printf("\n");
	}
}


