#include <stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int a=n;
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<i;j++)
		{
		printf(" ");
		}
		for (int p=1;p<=a;p++)
		{
		printf("* ");
		}
		printf("\n");
		a--;
        }
        return 0;
}
	
	
