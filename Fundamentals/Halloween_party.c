#include <stdio.h>

int main()
{
	int t,p=0;
	long long int k,a,b;
	scanf("%d",&t);
	while(p<t)
	{
		scanf("%lld",&k);
		a = k/2;
		b = k - a;
		printf("%lld\n",a*b);
		p++;
	}
}
