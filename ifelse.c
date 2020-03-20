#include<stdio.h>

void main()
{
	int a,b,c;
	int g;
	printf("Enter the numbers\n");
	scanf("%d%d",&a,&b);
	printf("Enter the case\n");
	scanf("%d",&g);
	if(g == 1)
	{
		
		c = a + b;
		printf("Addition = %d\n",c);
	}
	else if(g == 2)
	{
		
		c = a - b;
		printf("Substraction = %d\n", c);
	}
	else if(g == 3)
	{
		
		c = a / b;
		printf("Division = %d\n", c);
	}
	else if(g == 4)
	{	
		
		c = a * b;
		printf("Multiplication = %d\n", &c);
	}
}









