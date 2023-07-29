// Given two integer number M and N, write a program to print the integers from M to N.

#include <stdio.h>
int main()
{
	int m;
	printf("Enter a number m: ");
	scanf("%d",&m);
	int n;
	printf("Enter a number n: ");
	scanf("%d",&n);
	for (;m<=n;m++)
	{
		printf("%d\n",m);
	}
	return 0;
}

