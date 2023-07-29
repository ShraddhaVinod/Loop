// (for loop using) Print solid square patter(*)
/*
#include <stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++)
		{
			printf("* ");
		}
		 	printf("\n");
	}
	return 0;
}
*/	
	
// (while loop using) Print solid square patter(*)	

#include <stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int i=1;
	
	while (i<=n)
	{
		int j=1;
		while (j<=n)
		{
			printf("* ");
			j++;
		}
		printf("\n");
			i++;
	}
	return 0;
}
