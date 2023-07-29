#include <stdio.h>
int main()
{
	int n,G=0,L;
	printf("Enter a number: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		int a;
		printf("Enter Input: ");
		scanf("%d",&a);
		if (a>G)
		{
			L=a;
		}
		else
		{
			L=G;
		}
	}
		printf("Greatest=%d\n",L);
	
	return 0;
}
