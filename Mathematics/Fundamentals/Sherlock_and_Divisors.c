#include <stdio.h>
#include <math.h>

int main()
{
	int t,p=0,i,a=0;
	long long int n,no,temp;
	scanf("%d",&t);
	while(p<t)
	{
		scanf("%lld",&n);
		no = sqrt(n);
		a=0;
		for(i=1;i<=no;i++)
		{
			if((n%i) == 0)
			{
				if( (i%2)==0)
				{
					temp = n / i;
					if((temp % 2) == 0 && temp!=i)
					{
						a+=2;
					}
					else
					{
						a++;
					}
				}
				else 
				{
					temp = n / i;
					if((temp % 2) == 0 && temp!=i)
					{
						a++;
					}	
				}
			}
		}
		printf("%d\n",a);
		p++;
	}
}
