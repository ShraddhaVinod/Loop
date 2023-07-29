/*
  1
  22
  333
  4444
  55555
  666666
*/
/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}
*/

/*
1
23
456
78910
*/
/*
#include<stdio.h>
int main()
{
	int n,a=1;
	printf("Enter row number: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=i;j++)
		{
			printf("%d ",a);
			a++;
		}
		printf("\n");
	}
	return 0;
}
*/

/*
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
*/
/*
#include<stdio.h>
int main()
{
	int n,a=1;
	printf("Enter row number: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++)
		{
			printf("%d ",a);
			a++;
		}
		printf("\n");
	}
	return 0;
}
*/

/*
1
2 3 4
5 6 7 8 9
10 11 12 13 14 15 16
*/
/*
#include<stdio.h>
int main()
{
	int n,a=1,k=1;
	printf("Enter row number: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=a;j++)
		{
			printf("%d ",k);
			k++;
		}
		printf("\n");
		a=a+2;
	}
	return 0;
}
*/
/*
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4
*/
/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter row number: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}
*/
/*
1 2 3 4 
1 2 3 4
1 2 3 4 
1 2 3 4
*/
/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter row number: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}
*/
/*
4 4 4 4
3 3 3 3
2 2 2 2
1 1 1 1
*/
/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter row number: ");
	scanf("%d",&n);
	for (int i=n;i>0;i--)
	{
		for (int j=1;j<=n;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}

return 0;
}	
*/
/*
5
5 4
5 4 3
5 4 3 2
5 4 3 2 1
*/
/*
#include <stdio.h>
int main()
{
	int n;
	printf("Enter row number: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		int a=n;
		for (int j=1;j<=i;j++)
		{
			printf("%d ",a);
			a--;
		}
		printf("\n");
	}
	return 0;
}
*/
/*
1 2 3 4 5 
1 2 3 4
1 2 3
1 2
1
*/
/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter row number: ");
	scanf("%d",&n);
	int a=n;
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=a;j++)
		{
			printf("%d ",j);
		
		}
		a--;
		printf("\n");
	}
	return 0;
}     
*/
/*
5 4 3 2 1 
5 4 3 2
5 4 3
5 4
5
*/
/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter row number: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		for (int j=n;j>=i;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
*/	
/*
5432112345
5432  2345
543    345
54      45
5        5
*/
/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter row number: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		
		for (int j=n;j>=i;j--)
		{
			printf("%d",j);
		}
		for (int p=1;p<i;p++)
		{
			printf("  ");
		}
		for (int k=i;k<=n;k++)
		{
			printf("%d",k);
		}
		printf("\n");
	}
	return 0;
}
*/
/*
A B C D
A B C D
A B C D
A B C D
*/
/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter  row number: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++)
		{
			int d=j+64;
			char ch=(char)d;
			printf("%c ",ch);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
*/
/*
A
A B
A B C
A B C D
A B C D E
*/
/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter row number: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=i;j++)
		{
			int d=j+64;
			char ch=(char)d;
			printf("%c ",ch);
		}
		printf("\n");
	}
	return 0;
}
*/
/*
1
A B
1 2 3
A B C D 
1 2 3 4 5 
A B C D E F
*/
/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter row number: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		int a=1;
		for (int j=1;j<=i;j++)
		{
			int d=a+64;
			char ch=(char)d;
			if (i%2!=0)
			{
				printf("%d ",j);
			}
			else
			{
				printf("%c ",ch);
				a++;
			}
		}
		printf("\n");
	}
	return 0;
}	
*/
/*
    *
    *
* * * * *
    *
    *
*/
/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter row number: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++)
		{
			int a=n/2+1;
			if (i==a || j==a)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}
*/
/*
* * * * *
*       *
*       *
*       *
* * * * *
*/
/*
#include<stdio.h>	
int main()
{
	int n;
	printf("Enter row number: ");
	scanf("%d",&n);	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++)
		{
			if (i==1 || i==n || j==1 || j==n)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}
*/
/*
* * * * * *
*         *
*         *
* * * * * *	
*/
/*
#include<stdio.h>	
int main()
{
	int n;
	printf("Enter row number: ");
	scanf("%d",&n);
	int m;
	printf("Enter column number: ");
	scanf("%d",&m);
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=m;j++)
		{
			if (i==1 || i==n || j==1 || j==m)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}
*/
/*
*   *
 * *
  *
 * *
*   *	
*/
/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter row number: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++)
		{
			if (i==j || i+j==n+1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
*/
/*
1
3 5
7 9 11
13 15 17 19
*/
/*
#include<stdio.h>
int main()
{
	int n,a=1;
	printf("Enter row number: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=i;j++)
		{
			printf("%d ",a);
			a=a+2;
		}
		printf("\n");
	}
	return 0;
}
*/
/*
5 4 3 2 1
4 3 2 1
3 2 1
2 1
1
*/
/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter row number: ");
	scanf("%d",&n);
	int a=n;
	for (int i=1;i<=n;i++)
	{

		for (int j=a;1<=j;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
		a--;
	}
	return 0;
}
*/
/*
1 3 5 7 9 
3 5 7 9
5 7 9
7 9
9
*/
/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter row number: ");
	scanf("%d",&n);
	int p=1,t=n;
	for (int i=1;i<=n;i++)
	{
		int a=p;
		for (int j=1;j<=t;j++)
		{
			printf("%d ",a);
			a=a+2;
		}
		printf("\n");
		p=p+2;
		t--;
	}
	return 0;
}
*/
/*
0
1 0 1
2 1 0 1 2
3 2 1 0 1 2 3
4 3 2 1 0 1 2 3 4
*/
/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter row number: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		int a=i-1;
		for (int j=1;j<=i;j++)
		{
			printf("%d ",a);
			a--;
		}
		for (int k=1;k<=i-1;k++)
		{
			printf("%d ",k);
		}
		printf("\n");
	}
	return 0;
}
*/
/*
        1
       1 2
      1 2 3
     1 2 3 4
    1 2 3 4 5
*/
/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter row number: ");
	scanf("%d",&n);
	int a=n;
	for (int i=1;i<=n;i++)
	{

		for (int j=1;j<a;j++)
		{
			printf(" ");
		}
		for (int p=1;p<=i;p++)
		{
			printf("%d ",p);
		}
		printf("\n");
		a--;
	}
	return 0;
}
*/
/*
1 2 3 4 5
 1 2 3 4
  1 2 3
   1 2
    1
*/
/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter row number: ");
	scanf("%d",&n);
	int a=n;
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<i;j++)
		{
			printf(" ");
		}
		for (int k=1;k<=a;k++)
		{
			printf("%d ",k);
		}
		printf("\n");
		a--;
	}
	return 0;
}
*/
/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*//*
#include<stdio.h>
int main()
{
	int n,a;
	printf("Enter row number: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		if (i%2==0) a=0;
		else a=1;
	for (int j=1;j<=i;j++)
	{
		printf("%d ",a);
		if (a==0) a=1;
		else a=0;
	}
	printf("\n");
	}
	return 0;
}
*/
/*
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1	
*/
/*
#include<stdio.h>
int main()
{
	int n,a;
	printf("Enter row number: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=i;j++)
		{
			if (j%2==0)
			{
				printf("0 ");
			}
			else
			{
				printf("1 ");
			}
		}
			printf("\n");
	}
	return 0;
}
*/
/*
1 2 3 4 5 
2 2 3 4 5
3 3 3 4 5
4 4 4 4 5
5 5 5 5 5
*/
/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter row number: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=i;j++)
		{
			printf("%d ",i);
		}
		         int a=i+1;
			 for (;a<=n;a++)
			 {
			 	printf("%d ",a);
			 }
		
		printf("\n");
	}
	return 0;
}
*/
/*
        *
      * *
    * * *
  * * * *
* * * * * 
*/
/*	
#include<stdio.h>
int main()
{
	int n;
	printf("Enter row number: ");
	scanf("%d",&n);
	int a=n;
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<a;j++)
		{
			printf("  ");
		}
		for (int p=1;p<=i;p++)
		{
			printf("* ");
		}
		printf("\n");
		a--;
	}
	return 0;
}
*/
/*
* * * * *
  * * * *
    * * *
      * *
        *
*/     
/*   
#include<stdio.h>
int main()
{
	int n;
	printf("Enter row number: ");
	scanf("%d",&n);
	int a=n;
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<i;j++)
		{
			printf("  ");
		}
		for (int p=1;p<=a;p++)
		{
			printf("* ");
		}
		printf("\n");
		a--;
	}
	return 0;
}
*/
/*
      1
    1 2 1
  1 2 3 2 1	
1 2 3 4 3 2 1
*/
/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter row number: ");
	scanf("%d",&n);
	int a=n;
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<a;j++)
		{
			printf("  ");
		}
		for (int p=1;p<=i;p++)
		{
			printf("%d ",p);
		}
		for (int k=i-1;k>0;k--)
		{
			printf("%d ",k);
		}
		printf("\n");
		a--;
	}
	return 0;
}
*/
/*
         *
        * *
       * * * 
      * * * *  
     * * * * *
      * * * * 
       * * *
        * * 
         *           
*/
/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter row number: ");
	scanf("%d",&n);
	int a=n;
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<a;j++)
		{
			printf(" ");
		}
		for (int p=1;p<=i;p++)
		{
			printf("* ");
		}
		printf("\n");
		a--;
	}
	int b=n-1;
	for (int t=1;t<n;t++)
	{
		for (int l=1;l<=t;l++)
		{
			printf(" ");
		}
		for (int k=1;k<=b;k++)
		{
			printf("* ");
		}
		printf("\n");
		b--;
	}
	return 0;
}
*/
/*
* * * * * * * * 
* * *     * * *
* *         * *
*             *
*/
/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter row number: ");
	scanf("%d",&n);
	int a=n;
	int s=1;
	for (int i=1;i<=n;i++)
	{	
		for (int j=1;j<=a;j++)
		{
			printf("* ");
		}
		for (int k=1;k<s;k++)
		{
			printf("  ");
		}
		for (int p=1;p<=a;p++)
		{
			printf("* ");
		}
		printf("\n");
		a--;
		s+=2;
	}
	return 0;
}
*/
/*
*             *
* *         * *
* * *     * * *
* * * * * * * *
*/
/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter row number: ");
	scanf("%d",&n);
	int a=n;
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=i;j++)
		{
			printf("* ");
		}
		for (int k=1;k<a;k++)
		{
			printf("    ");
		}
		for (int p=1;p<=i;p++)
		{
			printf("* ");
		}
		printf("\n");
		a--;
	}	
	return 0;
}
*/
/*
*             *
* *         * *
* * *     * * *
* * * * * * * *
* * * * * * * * 
* * *     * * *
* *         * *
*             *
*/
/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter row number: ");
	scanf("%d",&n);
	int a=n;
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=i;j++)
		{
			printf("* ");
		}
		for (int k=1;k<a;k++)
		{
			printf("    ");
		}
		for (int p=1;p<=i;p++)
		{
			printf("* ");
		}
		printf("\n");
		a--;
	}
	int b=n,s=1;
	for (int t=1;t<=n;t++)
	{	
		for (int q=1;q<=b;q++)
		{
			printf("* ");
		}
		for (int k=1;k<s;k++)
		{
			printf("  ");
		}
		for (int p=1;p<=b;p++)
		{
			printf("* ");
		}
		printf("\n");
		b--;
		s+=2;
	}
	return 0;
}
*/
// Hollow diamond
/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter row number: ");
	scanf("%d",&n);	
	int b=n,s=1;
	for (int t=1;t<=n;t++)
	{	
		for (int q=1;q<=b;q++)
		{
			printf("* ");
		}
		for (int k=1;k<s;k++)
		{
			printf("  ");
		}
		for (int p=1;p<=b;p++)
		{
			printf("* ");
		}
		printf("\n");
		b--;
		s+=2;
	}
	int a=n;
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=i;j++)
		{
			printf("* ");
		}
		for (int k=1;k<a;k++)
		{
			printf("    ");
		}
		for (int p=1;p<=i;p++)
		{
			printf("* ");
		}
		printf("\n");
		a--;	
	}
	return 0;
}
*/
/*
        *       *
       * *     * * 
      * * *   * * * 
     * * * * * * * * 
     * * * * * * * *
      * * * * * * *
       * * * * * *
        * * * * *
          * * * 
           * * 
            *
*/
/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	int a=n;
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<a;j++)
		{
			printf(" ");
		}
		for (int p=1;p<=i;p++)
		{
			printf("* ");
		}
		for (int k=1;k<a;k++)
		{
			printf("  ");
		}
		for (int q=1;q<=i;q++)
		{
			printf("* ");
		}
		printf("\n");
		a--;
	}
	int b=n*2;
	int g=1;
	for (int s=n*2;s>0;s--)
	{
		for (int z=1;z<g;z++)
		{
			printf(" ");
		}
		for (int t=1;t<=b;t++)
		{
			printf("* ");
		}
		printf("\n");
		g++;
		b--;
	}
	return 0;
}
*/
/*
1 2 3 
6 5 4
7 8 9
*/
/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter row number: ");
	scanf("%d",&n);
	int a=1;
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++)
		{
			if(i%2!=0)
			{
				printf("%d ",a);
				a++;
			}
		
			else	
	
			{
			
				a=a+n-1;
				printf("%d ",a);
				a--;
			}
		}
	
		printf("\n");
	}
	        return 0;
}
*/
/*
4 5 4 3 2
3 4 5 4 3
2 3 4 5 4
1 2 3 4 5 
*/
/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter row number: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		int k=n-(i-1);
		for (int j=1;j<=i+1;j++)
		{
			printf("%d ",k);
			k++;
		}
		int p=n-i;
		int d=n;
		for (int q=1;q<=p;q++)
		{
			printf("%d ",d);
			d--;
		}
		printf("\n");
	}
	return 0;
}
*/
/*
* * * *
*     *
*     *
* * * *
      *
      *
      *
* * * *
*/
/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter row number: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++)
		{
			if (i==1 || i==n || j==1 || j==n)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	for (int p=1;p<=n;p++)
	{
		for (int k=1;k<=n;k++)
		{
			if (p==n || k==n)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}
*/
/*
* * * * 
*     *
*     *
* * * *
*     *
*     *
* * * *
*/
/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter row number: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++)
		{
			if (i==1 || i==n || j==1 || j==n)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	for (int p=1;p<n;p++)
	{
		for (int k=1;k<=n;k++)
		{
			if (p==n-1 || k==1 || k==n)
			{
			printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}
/*
      *
     * *
    *   *
   * * * *



#include<stdio.h>
int main()
{
	int n;
	printf("Enter row number: "); 
*/
