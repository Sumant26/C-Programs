#include<stdio.h>

void main()
{
	int a,t,b;
	printf("Enter the value for a\n");
	scanf("%d",&a);
	printf("Value of a = %d\n",a);
	printf("Enter the value for b\n");
	scanf("%d",&b);
	printf("Value of b = %d\n",b);
	t = a;
	a = b;
	b = t;
	printf("Swapped value of a = %d\n",a);
	printf("Swapped value of b = %d\n",b);
}
