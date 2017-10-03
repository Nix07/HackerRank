#include <stdio.h>
#include <math.h>
int main()
{
	int t,p=0,phi=0;
	scanf("%d",&t);
	long long int a,b,x,res,i;
	while(p<t)
	{
		phi = 0;
		scanf("%lld %lld %lld",&a, &b, &x);
		if(b==0)
		{
			if(x!=1)
			{
				printf("1\n");
				p++;
				continue;
			}
			if(x==1)
			{
				printf("0\n");
				p++;
				continue;
			}
		}
		if(b>0)
		{
			res = Modular_Exponent(a, b, x);
			printf("%lld\n", res);
			p++;
			continue;
		}
		if(b<0)
		{
			for(i=1;i<x;i++)
			{
				if( (a*i)%x == 1)
				{
					b = abs(b);
					res = Modular_Exponent(i, b, x);
					printf("%lld\n", res);
					p++;
					break;
				}
			}
		}
	}
	return 0;
}

int Modular_Exponent(long long int a, long long int b, long long int m)
{
	long long int x,power, temp;
	x = 1,power = a % m;
	while(b>0)
	{
		temp = b % 2;
		b = b/2;
		if( temp == 1)
		{
			x = (x * power) % m;
		}
		power = (power * power) % m;
	}
	return x;
}
