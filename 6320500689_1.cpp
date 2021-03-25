#include <stdio.h>
int main ()
{
	int n,i;
	scanf ("%d",&n);
	if (n>=1 && n<=1000000)
	{
		while (n>1)
		{
			for (i=2; i<=n; i++)
			{
				if (n%i == 0)
				{
					printf ("%d ",i);
					n =n/i;
					break;
				}
			}
		}
	}
	return 0;
}
