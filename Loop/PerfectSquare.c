// Find the number of perfect squares in the range a to b.

#include <stdio.h>
int main()
{
	int a,i;
	printf("Enter a: ");
	scanf("%d",&a);
	int b;
	printf("Enter b: ");
	scanf("%d",&b);
	for (i=a;i<=b;i++)
	{
		
		for (int j=1;j<=i;j++)
		{
			if (j*j==i)
			{
				printf("%d\n",i);
			}
			else
			{
				a++;
			}
		}
	}
	return 0;
}
	
