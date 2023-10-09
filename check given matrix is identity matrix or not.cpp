#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10][10],r,c,i,j,f=0;
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
			if((i==j)&&(a[i][j]==1))
				f=0;
			else if((i!=j)&&(a[i][j]==0))
				f=0;
			else
			{
				printf("not identify matrix....");
				exit(0);
			}
		}
	}
	if(f==0)
		printf("identify matrix....");
	
}
