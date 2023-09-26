#include<stdio.h>
int main()
{
	int a[10][10],r,c,i,j;
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
	printf("display matrix =\n ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i<j)
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

}
