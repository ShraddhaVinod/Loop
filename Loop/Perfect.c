
// Perfect Number

#include <stdio.h>
int main()
{
	int n;
	printf("Enter the value of N: ");
	scanf("%d",&n);
	int i=1;
	int s=0;
	while (i<n)
	{
		if (n%i==0)
		{
			s=s+i;
		}
		i++;
	}
	if (s==n)
	{
		printf("Perfect Number\n");
	}
	else
	{
		printf("Not Perfect Number\n");
	}
	return 0;
}
