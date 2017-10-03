#include <stdio.h>
#include <math.h>
int main()
{
	long long int f,n,i,j,sq,a;
	int choice = 0, count = 0;
	scanf("%lld %lld",&n,&f);
	long long int A[n];
	for(i=0;i<n;i++)
		scanf("%lld",&A[i]);
	sq = sqrt(f);
	for(i=1;i<=sq;i++)
	{
		if ( (f%i) == 0)
		{
			choice = 1;
			for(j=0;j<n;j++)
			{
				if( (A[j]%i) == 0 )
				{
					choice = 0;
					break;
				}
			}
			if(choice)
				count++;
				
			choice = 1;
			a = f/i;
			for(j=0;j<n;j++)
			{
				if( (A[j]%a) == 0 )
				{
					choice = 0;
					break;
				}
			}
			if(choice)
				count++;
		}
	}
	printf("%lld\n",count);
	return 0;
}
