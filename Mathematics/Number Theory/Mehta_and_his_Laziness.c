#include <stdio.h>
#include <math.h>
int main()
{
	int t,p=0,n,count=0,total=0,temp=0,i,temp2,w;
	scanf("%d",&t);
	while(p<t)
	{
		scanf("%d",&n);
		if(n<8)
		{
			printf("0\n");
			p++;
			continue;
		}
		count=0, total=0, temp=0,temp2=0;
		temp2 = sqrt(n);
		if( (temp2 * temp2) != n)
		{
			for(i=2;i<=temp2;i++)
			{
				if( (n%i) == 0)
				{
					total+=2;
					temp = n/i;
					if( (i%2) == 0)
					{
						w = sqrt(i);
						if( (w*w) == i)
							count++;
					}
					if( (temp%2) == 0 && temp!=i)
					{
						w = sqrt(temp);
						if( (w*w) == temp)
							count++;
					}	
				}
			}
			total++;	
		}
		else
		{
			for(i=2;i<=temp2;i++)
			{
				if( (n%i) == 0)
				{
					total+=2;
					temp = n/i;	
					if( (i%2) == 0)
					{
						w = sqrt(i);
						if( (w*w) == i)
							count++;
					}
					if( (temp%2) == 0 && temp!=i)
					{
						w = sqrt(temp);
						if( (w*w) == temp)
							count++;
					}
				}
			}
		}
		if(count == 0)
		{
			printf("0\n");
			p++;
			continue;
		}
		if( GCD(count, total) == 1)
		{
			printf("%d/%d\n",count,total);
		}
		else
		{
			temp = GCD(count, total);
			count = count/temp;
			total = total/temp;
			printf("%d/%d\n",count,total);
		}
		p++;
	}
	return 0;
}

int GCD(int a, int b)
{
	int r;
	while(b>0)
	{
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}
