// 2-2^3+2^5-2^7+2^9
/*
#include <stdio.h>
#include <math.h>
int main()
{
	int n,p=1,k,s=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	int a;
	printf("Enter input: ");
	scanf("%d",&a);
	for (int i=1;i<=n;i++)
	{

		if (i%2==0)
		{
			k=pow(a,p);
			s=s-k;
		}
		else
		{
			k=pow(a,p);
			s=s+k;
		}
		p=p+2;
	}
	printf("Output=%d\n",s);
	return 0;
}
*/

// Write a program to print first 10 integers and their squares 
/*
#include <stdio.h>
int main()
{
	int n,s;
	printf("Enter a number: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		s=i*i;
	
	printf("%d %d\n",i,s);
	}
	return 0;
}
*/

// Print series using for loop 10,20,30,.......300.
/*
#include <stdio.h>
int main()
{
	int n,s;
	printf("Enter a number: ");
	scanf("%d",&n);
	for (int i=10;i<=n;i=i+10)
	{
		printf("%d ",i);
	}
	return 0;
}
*/

// Print series using while loop 100,98,91,.....7.

#include <stdio.h>
int main()
{
	int n,s;
	printf("Enter a number: ");
	scanf("%d",&n);
	while (n>0)
	{
		printf("%d ",n);
		n=n-7;
	}
	return 0;
}
	
	


