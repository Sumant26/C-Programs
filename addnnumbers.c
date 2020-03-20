#include<stdio.h>

void main()
{
	int a, sum = 0, i, value;
	printf("How many numbers you want to add?\n");
	scanf("%d", &a);
	printf("Enter %d integers\n",a);
	for(i = 1; i<=a; i++)
	{
		scanf("%d", &value);
		sum = sum + value;
	}
	printf("Sum of integers = %d\n", sum);
}






