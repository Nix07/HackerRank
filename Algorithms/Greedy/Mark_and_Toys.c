#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	long long int n, A[100000], k, i, sum=0, toys=0;
	scanf("%lld %lld",&n, &k);
	for(i=0;i<n;i++)
		scanf("%lld",&A[i]);
	sort(A,A+n);
	for(i=0;i<n;i++)
	{
		sum += A[i];
		if(sum <= k)
			toys++;
		if(sum > k)
		{
			printf("%lld\n",toys);
			break;
		}
	}
	return 0;
}

