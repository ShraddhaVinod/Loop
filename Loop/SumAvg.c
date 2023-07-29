#include <stdio.h>
int main()
{
	int n,s=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		int a;
		printf("Enter input: ");
		scanf("%d",&a);
		s=s+a;
	}
	int A;
	A=s/n;
	printf("Average=%d\n",A);
	printf("Sum=%d\n",s);
	return 0;
}
	
