// Find the sum of the square of the first n natural number that are divisible by 3.

#include <stdio.h>
int main()
{
	int n,sum=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	int i=1;
	while (i<=n)
	{
		if ((i*i)%3==0)
		{
			sum=sum+(i*i);
		}
		i++;
	}
		printf("Sum=%d\n:",sum);
	return 0;
}
