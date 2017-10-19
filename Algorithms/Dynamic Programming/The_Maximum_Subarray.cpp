#include <cstdio>
#include <algorithm>
#define INF -999999999

using namespace std;

int main()
{
	long long int t,n,A[100000],i,B[100000],max_continuous=INF,j,max_non_continuous=INF;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		for(i=0;i<n;i++)
			scanf("%lld",&A[i]);
    
		B[0] = A[0];
		max_continuous=B[0];
	        max_non_continuous=B[0];
		for(i=1;i<n;i++)
		{
			B[i] = max(A[i], B[i-1]+A[i]);
			if(B[i] > max_continuous)
				max_continuous = B[i];
		}

		B[0] = A[0];
		for(i=1;i<n;i++)
		{
			B[i] = A[i];
			for(j=0;j<i;j++)
			{
				B[i] = max(B[i]+A[j],B[i]);
				if(B[i] > max_non_continuous)
					max_non_continuous = B[i];
			}
		}

		printf("%lld %lld\n",max_continuous,max_non_continuous);
	}
	return 0;
}
