#include <stdio.h>
#include <math.h>
int main()
{
	long long unsigned int n,sqn,num;
	int t,p=0;
	scanf("%d",&t);
	while(p<t)
	{
		num = pow(10,9) + 7;
		scanf("%lld",&n);
		n = n % num;
		sqn = (n*n)%num;
		printf("%lld\n",sqn);
		p++;
	}
	return 0;
}
