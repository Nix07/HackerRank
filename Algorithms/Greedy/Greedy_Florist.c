#include <cstdio>
#include <algorithm>

using namespace std;

bool comp(long long int a, long long int b)
{
	return a>b;
}

int main()
{
	long long int n,k,i, bought = 0, cost = 0, x=0, A[100000], count=0;
	scanf("%lld %lld",&n,&k);
	for(i=0;i<n;i++)
		scanf("%lld",&A[i]);
	sort(A,A+n, comp);

	x = 0, cost = 0;
	while(bought < n)
	{
		if(x == 0)
		{
			for(i=0;i<k;i++)
			{
				cost = cost + A[i];
				bought++;
				if(bought == n)
					break;
			}
			x++;	
		}
		else
		{
			for(i=k;i<n;i++)
			{
				cost = cost + (x + 1)*A[i];
				bought++, count++;
				if(bought == n)
					break;
				if(count == k)
				{
					x++;
					count = 0;
					
				}
			}
		}
	}
	printf("%lld\n",cost);
	return 0;
}

