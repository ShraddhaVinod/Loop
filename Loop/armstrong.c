#include<stdio.h>
#include<math.h>
int main()
{
	int n,m,i,d=0,l;
	printf("Enter a number: ");
	scanf("%d",&n);
	i=n;
	while (i>0)
	{
		l=i%10;
		d=d+1;
		i=i/10;
	}
	int p;
	int arm=0;
	p=n;
	while (p>0)
	{
		l=p%10;
		m=pow(l,d);
		arm=arm+m;
		p=p/10;
	}
	
	if (n==arm)
	{
		printf("Armstrong number\n");
	}
	else
	{
		printf("Not Armstrong number\n");
	}
	return 0;
}
