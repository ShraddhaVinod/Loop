// loop

#include <stdio.h>
int main()
{
	int n,N;
	printf("Enter number: ");
	scanf("%d",&n);
	for (int i=1;i<=10;i++)
	{
		N=n*i;
		printf("%d * %d = %d\n",n,i,N);
	}
	return 0;
}


//Nested loop
/*
#include <stdio.h>
int main()
{
	int m,n,N;
	printf("Enter table no: ");
	scanf("%d",&m);
	printf("Enter table no: ");
	scanf("%d",&n);
	for (m;m<=n;m++)
	{
		for (int i=1;i<=10;i++)
		{
		N=m*i;
		printf("%d * %d = %d\n",m,i,N);
		}
		printf("\n");
	}
	return 0;
}
*/
