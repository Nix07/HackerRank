#include <stdio.h>
#include <math.h>
int main()
{
	int t,p=0;
	long long int a,power,i,m,m1,x,temp;
	scanf("%d",&t);
	while(p<t)
	{
		scanf("%lld %lld",&a,&m);
		if(m==2)
		{
			printf("YES\n");
			p++;
			continue;
		}
		m1 = (m-1)/2;
		x = 1;
		power = a % m;
		while(m1>0)
		{
			temp = m1 % 2;
			m1 = m1 / 2;
			if( temp == 1)
			{
				x = (x * power) % m;
			}
			power = (power * power) % m;
		}
		if(x == 1 || x == 0)
			printf("YES\n");
		else	printf("NO\n");
		p++;
	}
	return 0;
}
