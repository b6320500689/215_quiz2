#include <stdio.h>
#include <string.h>
int main ()
{
	int n,m=0,k=2;
	int nn = n;
	scanf ("%d",&n);
	//if (n>=1 && n<=1000000)
		while (nn>0)
		{
			int d= nn%10;
			nn = nn/10;
			m = m*10 + d;
		}
		int p = (m==n);
		int prime=1;
		while (k<n)
		{
			if (n%k == 0)
			p=0;
			break;
		}
		k++;
		if (p && prime)
		printf ("%d\n",n);
		n++;
	return 0;
}
