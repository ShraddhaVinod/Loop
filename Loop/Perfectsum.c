#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int i=1;
	while (i<n)
	{
		int s=0,j=1;
		while (j<i)
		{
			if (i%j==0)
			{
				s=s+j;
			
			}
			j++;
		
		}
		if (s==i)
		{
			printf("%d\n",i);
		}
		i++;
	}
	return 0;
}
