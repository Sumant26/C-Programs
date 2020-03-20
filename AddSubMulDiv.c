#include<stdio.h>

void main()
{
	int a,b,add,sub,mul,div;
	printf("Enter the values\n");
	scanf("%d%d",&a,&b);
	add = a + b;
	sub = a - b;
	mul = a * b;
	div = a / b;
	printf("Addition = %d\n",add);
	printf("Substraction = %d\n", sub);
	printf("Multiplication = %d\n", mul);
	printf("Division = %d\n", div);
}
