#include <stdio.h>
int main()
{
	long long int n, A[1000000],count =0,i,j,max = 0, nocount=0;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
		scanf("%lld",&A[i]);
	for(i=0;i<n;i++)
	{
		if( A[i] > max)
			max = A[i];
	}
	
	for(i=2;i<=max;i++)
	{
		count = 0, nocount=0;
		for(j=0;j<n;j++)
		{
			if ( (A[j] % i) == 0)
				count++;
			else if( (A[j] % i) !=0)
			{
				nocount++;
				if(nocount > 1)
					break;
			}
		}
		if(count == n-1)
		{
			printf("%lld\n",i);
			return 0;	
		}
	}
	return 0;
}
