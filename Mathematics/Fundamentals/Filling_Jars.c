#include <stdio.h>

int main()
{
	int p=0;
	long long int n,m,a,b,k,sum=0;
	scanf("%lld %lld",&n,&m);
	while(p<m)
	{
		scanf("%lld %lld %lld",&a,&b,&k);
		sum = sum + ( k*((b-a)+1));
		p++;
	}
	printf("%lld\n",sum/n);
	return 0;
}

