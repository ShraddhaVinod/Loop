#include <stdio.h>
int main()
{
	int n,max=0,Smax=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		int a;
		printf("Enter input: ");
		scanf("%d",&a);
		if (a>max)
		{
			Smax=max;
			max=a;
		}
		else if (a>Smax)
		{
			Smax=a;
		}
		
	}
	printf("Second Maximum=%d\n",Smax);
	return 0;
}
	
