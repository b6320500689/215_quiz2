#include <stdio.h>
#include <string.h>
int main ()
{
	int n,m=0,t;
	int nn = n;
	scanf ("%d",&n);
	if (n>=1 && n<=1000000)
	{
		t=n;
		while (t!=0)
		{
			m = m*10;
			m = m+t%10;
			t = t/10;
		}
		}
	if (n == m)
	printf ("%d is a palindrome\n",n);
	else
	printf ("%d is not a palindrome\n",n);
	return 0;
}
