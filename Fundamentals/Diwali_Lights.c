#include <stdio.h>
#include <math.h>

int main()
{
	int t,p=0,n,i;
	long long int sum=0;
	scanf("%d",&t);
	while(p<t)
	{
		sum = 1;
		scanf("%d",&n);
		for(i=1;i<=n;i++)
			sum = (sum*2) % 100000;
		sum = sum - 1; 
		printf("%lld\n", sum);
		p++;
	}
	return 0;
}

