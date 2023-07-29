#include <stdio.h>
int main()
{
	int m,E=0,O=0;
	printf("Enter m: ");
	scanf("%d",&m);
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	for (;m<=n;m++)
	{
		if (m%2==0)
		{
			E=E+m;
		}
		else 
		{
			O=O+m;
		}
	}
		printf("Even no. sum:%d\n",E);
		printf("Odd no. sum:%d\n",O);
		
	return 0;
}
