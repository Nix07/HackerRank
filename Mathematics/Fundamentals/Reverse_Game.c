#include <stdio.h>
int main()
{
	int t,p=0;
	scanf("%d",&t);
	while(p<t)
	{
		int n,k,var;
		scanf("%d %d",&n,&k);
		if((n%2)!=0)
		{
			if(k<(n/2))
			{
				printf("%d\n",(2*k)+1);
				p++;
				continue;
			}
			if(k==(n/2))
			{
				printf("%d\n",(2*k));
				p++;
				continue;
			}
			if(k>(n/2))
			{
				printf("%d\n",(2*(n-k-1)));
				p++;
				continue;
			}
		}
		if((n%2)==0)
		{
			if(k<(n/2))
			{
				printf("%d\n",(2*k)+1);
				p++;
				continue;
			}
			if(k==(n/2))
			{
				printf("%d\n",(2*k)-2);
				p++;
				continue;
			}
			if(k>(n/2))
			{
				printf("%d\n",(2*(n-k-1)));
				p++;
				continue;
			}
		}
		p++;
	}
	return 0;
}
