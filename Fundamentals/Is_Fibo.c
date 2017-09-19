#include <stdio.h>
int main()
{
	int t,p=0,i,flag;
	long long int n, f[5500];
	scanf("%d",&t);
	f[0]=0,f[1]=1;
	for(i=2;i<5500;i++)
		f[i] = f[i-1] + f[i-2];
	while(p<t)
	{
		scanf("%lld",&n);
		flag = 1;
		for(i=0;i<5500;i++)
		{
			if(n == f[i])
			{
				printf("IsFibo\n");
				flag = 0;
				break;
			}
		}
		if(flag)
			printf("IsNotFibo\n");
		p++;
	}
	return 0;
}
