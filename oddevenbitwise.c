#include<stdio.h>

void main()
{
	int n;
	printf("Enter the value");
	scanf("%d",&n);
	if(n & 1 == 1)
	{
		printf("Odd\n");
	}
	else
	{
		printf("Even\n");
	}
}
