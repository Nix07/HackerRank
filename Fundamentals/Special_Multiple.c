#include <stdio.h>
#include <math.h>

int main()
{
	int p=0,ans=0,t,n,b;
    long long int num,temp,i;
	scanf("%d",&t);
	while(p<t)
	{
		scanf("%d",&n);
		b=0;
		for(i=1;i<=99999999999;i++)
		{
			temp = n * i;
			//printf("i = %lld\n",i);
			while(temp>0)
			{
				num = temp % 10;
				//printf("Digit = %d\n", num);
				if(num == 0 || num == 9)
				{
					ans = 1;
					temp = temp / 10;
					continue;
				}
				else
				{
					ans = 0;
					temp = temp / 10;
					break;
				}
			}
			if(ans)
			{
				printf("%lld\n",i*n);
				ans = 0;
				break;
			}
			if(n > 400 && b==0)
			{
				i = 9000000;
				b=1;
			}
		}
		p++;
	}
	return 0;
}

