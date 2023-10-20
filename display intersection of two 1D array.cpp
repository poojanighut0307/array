#include<stdio.h>
int main()
{
	int a[10],b[10],n1,n2,i,j,f;
	printf("enter limit of first array = ");
	scanf("%d",&n1);
	printf("\n enter first array = ");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n enter limit of second array = ");
	scanf("%d",&n2);
	printf("\n enter second array = ");
	for(j=0;j<n2;j++)
	{
			scanf("%d",&b[j]);
	}
	printf("\n Intersection = ");
	for(i=0;i<n1;i++)
	{	
		f=0;
		for(j=0; j<n2; j++)
		{
			if(a[i]==b[j])
			{
				f=1;
				break;
			}
		}
		if(f==1)
			printf("%d\t",a[i]);
	}
}


