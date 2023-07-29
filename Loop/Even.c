
/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		if(i%2==0)
		printf("%d\n",i);
	}
	return 0;
}
*/
// Even or odd Number

#include <stdio.h>
int main()
{
	int i=1;
	int n=100;
	while (i<=n)
	{
		if (i%2==0)
		{
			printf("%d\n",i);
		}
		else
		{
			printf("Odd\n");
		}
		i++;
	}
	return 0;
}
