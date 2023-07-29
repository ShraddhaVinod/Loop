#include <stdio.h>
int main()
{
	int n,fact=1;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	for (int a=n;a>=1;a--)
	{
		fact=fact*a;
	}
	printf("Factorial=%d\n",fact);
	return 0;
}
