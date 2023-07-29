#include <stdio.h>
int main()
{
	int m,n,P=1;
	printf("Enter m: ");
	scanf("%d",&m);
	printf("Enter n: ");
	scanf("%d",&n);
	for (int m=1;m<=n;m++)
	{
		P=P*m;	
	}
		printf("Product=%d\n",P);
		return 0;
}

