#include <stdio.h>
#include <string.h>
int main ()
{
	int n,m=0,t,i;
	int nn = n;
	scanf ("%d",&n);
	for (i=1; i<=1000000; i++)
	{
		t=n;
		while (t!=0)
		{
			m = m*10;
			m = m+t%10;
			t = t/10;
		}
		
	}
	printf ("%d\n",m);
	return 0;
}
