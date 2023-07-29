#include <stdio.h>
int main()
{
	int n,max=0,Smax=0,Tmax;
	printf("Enter a number: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		int a;
		printf("Enter input: ");
		scanf("%d",&a);
		if (a>max)
		{
			Tmax=Smax;
			Smax=max;
			max=a;
		}
		else if (a>Smax)
		{
			Tmax=Smax;
			Smax=a;
			
		}
		else
		{
			Tmax=a;
		}
		
	}
	printf("Third Maximum=%d\n",Tmax);
	return 0;
}
	
