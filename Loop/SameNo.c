#include <stdio.h>
int main()
{
	int n,s=0,sum=0;
	printf("Enter n: ");
	scanf("%d",&n);
	int a;
	printf("Enter input: ");
	scanf("%d",&a);
	for (int i=1;i<=n;i++)
	{
		s=a+(s*10);
		sum=sum+s;
	}
	printf("Sum=%d\n",sum);
	return 0;
}
