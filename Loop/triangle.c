// Printn right angle triangle Pattern use(*) in while loop

#include <stdio.h>
int main()
{
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	int i=1;
	while (i<=n)
	{
		int j=1;
		while (j<=i)
	{
		printf("* ");
		j++;
	}
	printf("\n");
	i++;
        }
        return 0;
}


// for loop use triangle pattern
/*
#include <stdio.h>
int main()
{
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
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

