#include <stdio.h>
#include <math.h>
int main()
{
	long long int a,b,x,ans,power,multiple,prev,next;
	int t,p=0,temp;
	scanf("%d",&t);
	while(p<t)
	{
		scanf("%lld %lld %lld",&b,&a,&x);
		multiple = pow(b,a);
		if(b==1 && x!=1)
		{
			printf("0\n");
			p++;
			continue;
		}
		
		if(b==1 && x==1)
		{
			printf("1\n");
			p++;
			continue;
		}
		
		
		if( a==0 && x!=1)
		{
			printf("0\n");
			p++;
			continue;
		}

		if( a==0 && x==1)
		{
			printf("1\n");
			p++;
			continue;
		}		
		
		if(a<0)
		{
			printf("0\n");
			p++;
			continue;
		}
		
		ans = 1, power = b % x;
		while(a>0)
		{
			temp = a % 2;
			a = a/2;
			if( temp == 1)
			{
				ans = (ans * power) % x;
			}
			power = (power * power) % x;
		}
		prev = multiple-ans;
		next = prev + x;
		if( (multiple - prev) < (next - multiple))
			printf("%lld\n",prev);
		else	printf("%lld\n",next);
		p++;
	}
	return 0;
}
