// loop

#include <stdio.h>
int main()
{
	int a,p,HCF,LCM,r;
	printf("Enter 1st number: ");
	scanf("%d",&a);
	int b;
	printf("Enter 2st number: ");
	scanf("%d",&b);
	p=a*b;
	while (b>0)
	{
		r=a%b;
		a=b;
		b=r;
	}
		HCF=a;
		LCM=p/HCF;
		printf("HCF=%d\n",HCF);
		printf("LCM=%d\n",LCM);
		return 0;
}
	
