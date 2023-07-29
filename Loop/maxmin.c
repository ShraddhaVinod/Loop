#include <stdio.h>
int main()
{
	int n,min,max;
	printf("Enter a number: ");
	scanf("%d",&n);
	int a;
	printf("Enter input: ");
	scanf("%d",&a);
	min=a;
	max=a;
	for (int i=1;i<n;i++)
	{
		int a;
		printf("Enter input: ");
		scanf("%d",&a);
		if (a>max)
		{
			max=a;
		}
		else if (a<min)
		{
			min=a;
		}
	}
		printf("Max=%d\n",max);
		printf("Min=%d\n",min);
	
	return 0;
}
