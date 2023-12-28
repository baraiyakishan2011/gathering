#include<stdio.h>

void size(int a[] ,int tsize)
{
	int sum;
	
	sum = tsize/sizeof(0);
	printf("Length of Array = %d\n",sum);
}

main()
{
	int a[] = {2,56,798,156,20,30,10};
	
	size(a,sizeof(a));
}