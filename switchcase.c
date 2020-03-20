#include<stdio.h>

void main()
{
	int a,b,c;
	int x;
	printf("Enter the numbers\n");
	scanf("%d%d",&a,&b);
	printf("Enter the case\n");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
		{
			
			c = a + b;
			printf("Addition = %d\n",c);
			break;
		}
		case 2:
		{
			
			c = a - b;
			printf("Substraction = %d\n", c);
			break;
		}
		case 3:
		{
			
			c = a / b;
			printf("Division = %d\n", c);
			break;
		}
		case 4:
		{	
			
			c = a * b;
			printf("Multiplication = %d\n", c);
			break;
		}
		default:
		{
			printf("Choice other than 1,2,3 and 4\n");
			break;
		}
		
	}
}		
	
