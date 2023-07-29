// Print triangle 

#include <stdio.h>
int main()
{
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	int i=n;
	while (i>0)
	{
		int j=1;
		while (j<=i)
	
	{
		printf("* ");
		j++;
	}
	printf("\n");
	i--;
        }
        return 0;
}


// for loop use Ulta triangle pattern
/*
#include <stdio.h>
int main()
{
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for (int i=n;i>0;i--)
	{
		for (int j=1;j<=i;j++)
	{
		printf("* ");
	}
		printf("\n");
	}
	return 0;
}
*/

	

