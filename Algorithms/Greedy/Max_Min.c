#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	long long int i,n,k,A[100000], diff=100000000, temp;
	scanf("%lld %lld",&n,&k);
	for(i=0;i<n;i++)
		scanf("%lld",&A[i]);
	sort(A,A+n);
	if(n==k)
	{
		printf("%lld\n",A[n-1]-A[0]);
		return 0;
	}
	for(i=0;i<n-k+1;i++)
	{
		temp = A[i+k-1] - A[i];
		if(temp < diff)
			diff = temp;
	}
	printf("%lld\n",diff);
	return 0;
}

