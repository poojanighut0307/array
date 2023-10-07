#include<stdio.h>
int main()
{
	int a[10][10],r,c,i,j,min,max;
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
	min=a[0][0];
	max=a[0][0];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]>max)
				max=a[i][j];
			if(a[i][j]<min)
				min=a[i][j];
		}
	}
	printf("\n Maximum number = %d",max);
	printf("\n Minimum number = %d",min);
}
