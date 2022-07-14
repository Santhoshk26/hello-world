// to print all numbers from 1 to n
#include<stdio.h>
int main()
{
	int i,n;
	printf("enter any number:");
	scanf("%d",&n);
	printf(" natural numbers from 1 to %d \n",n);
	for(i=1;i<=n;i++)
	{
		printf("%d \n",i);
	}
}
