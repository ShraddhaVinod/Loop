#include <stdio.h>
int main()
{
	int n,l,sum=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	int i=n;
	while (i>0)
	{
		l=i%10;
		sum=l+(sum*10);
		i=i/10;
	}
	if (n==sum)
	{
		printf("Palindrom number\n");
	}
	else
	{
		printf("Not Palindrom number\n");
	}
	return 0;
}
