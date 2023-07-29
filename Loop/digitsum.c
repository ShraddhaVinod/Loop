#include <stdio.h>
int main()
{
	int n,sum=0,l;
	printf("Enter a number: ");
	scanf("%d",&n);
	while (n>0)
	{
		l=n%10;
		sum=sum+l;
		n=n/10;
	}
	printf("Sum:%d\n",sum);
	return 0;
}
