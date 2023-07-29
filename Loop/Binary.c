

#include<stdio.h>
#include<math.h>
int main()
{
	int B,p,k;
	printf("Enter Binary number: ");
	scanf("%d",&B);
	int i=0,sum=0;
	while (B>0)
	{
		p=B%10;
		k=pow(2,i);
		sum=sum+p*k;
		B=B/10;
		i++;
	}
	printf("Decimal number:%d\n",sum);
	return 0;
}

