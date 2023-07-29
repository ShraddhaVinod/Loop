#include <stdio.h>
#include <math.h>
int main()
{
	int n,s=0,sum;
	printf("Enter a number: ");
	scanf("%d",&n);
	int k;
	printf("Enter power: ");
	scanf("%d",&k);
	for (int i=1;i<=n;i++)
	{
		sum=pow(i,k);
		s=s+sum;
	}
	printf("Sum=%d\n",s);
	return 0;
}

	
