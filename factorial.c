#include<stdio.h>

int factorial(int num)
{
	int fact;
	if(num<=1)
	{
		return 1;
	}
	else
	{
		fact = num * factorial(num-1);
	}
}

main()
{
	int num;
	
	printf("Enter The Value = ");
	scanf("%d",&num);
	
	printf("Factorial = %d",factorial(num));
}