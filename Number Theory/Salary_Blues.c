#include <stdio.h>

long long int GCD(long long int a, long long int b)
{
	long long int rem;
	while(b>0)
	{
		//printf("%lld %lld\n",a, b);
		rem = a % b;
		a = b;
		b = rem;
	}
	return a;
}

int main()
{
	long long int gcd, gcd2, k, n, q, p=0, i;
	long long int A[200000];
	scanf("%lld %lld",&n,&q);

	for(i=0;i<n;i++)
	{
		scanf("%lld",&A[i]);
	}

	gcd = A[0];
	for(i=1;i<n;i++)
	{
		gcd = GCD(gcd, A[i]);
		//printf("i = %d GCD = %lld A = %lld\n",i, gcd, A[i]);
	}
	while(p<q)
	{
		scanf("%lld",&k);

		gcd2 = GCD(gcd, k);
		printf("%lld\n", gcd2);
		
		p++;
	}
	return 0;
}
