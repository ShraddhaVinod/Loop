#include <stdio.h>
int main()
{
	int n;
	int p=1;
	printf("Enter a number: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		int a;
		printf("Enter input: ");
		scanf("%d",&a);
		p=p*a;
	}
	printf("Product of given integers:%d\n",p );
	return 0;
}
