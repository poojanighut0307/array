#include<stdio.h>
int main()
{
	int *a[100],n,i;
	printf("enter limit = ");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		printf("enter number = ");
		scanf("%d",a+i);
	}
	printf("array number =");
	for(i=0; i<n; i++)
		printf("%d\t",*(a+i));
}
