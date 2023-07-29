#include<stdio.h>
int main()
{
	int n,c=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	int k;
	printf("Enter Kth largest factor: ");
	scanf("%d",&k);
	int a=n;
	for (int i=1;i<=n;i++)
	{
		for (int j=n;j>0;j--)
		{
			if (a%j==0)
			{
				c=c+1;
			}
		}
			if (c==k)
			{
				printf("Kth largest factor:%d\n",j);
			}
			
	}
	return 0;
}
