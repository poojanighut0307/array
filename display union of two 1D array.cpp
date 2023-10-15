#include<stdio.h>
int main()
{
	int a[100],b[100],i,j,n1,n2,f;
	printf("enter limit of first array = ");
	scanf("%d",&n1);
	printf("enter element in first array ");
	for(i=0; i<n1; i++)
		scanf("%d",&a[i]);

	printf("enter limit of second array = ");
	scanf("%d",&n2);
	printf("enter element in second array ");
	for(j=0; j<n2; j++)
		scanf("%d",&b[j]);
		
	printf("\n union = ");
	for(i=0; i<n1; i++)
	{
		printf("%d\t",a[i]);
	}
	for(j=0; j<n2; j++)
	{
		f=0;
		for(i=0; i<n1; i++)
		{
			if(b[j]==a[i])
			{
				f=1;
			}
		}
		if(f==0)
			printf("%d\t",b[j]);
	}
}
