// Prime number using for loop
/*
#include <stdio.h>
int main()
{
	int n,c=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		if (n%i==0)
		c=c+1;
	}
	       if (c==2)
	       {
	       		printf("Prime number\n");
	       }
	       else
	       {
	       		printf("not Prime number\n");
	       }
	       return 0;
}
*/
// Prime number using while loop

#include <stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int i=1;
	int c=0;
	while (i<=n)
	{
		if (n%i==0)
		{
			c=c+1;
		}
		i++;
	}
	if (c==2)
	{
		printf("Prime Number\n");
	}
	else
	{
		printf("Not Prime Number\n");
	}
	return 0;
}
	
	
