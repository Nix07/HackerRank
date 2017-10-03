#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	int t,p=0,i,n;
	scanf("%d",&t);
	while(p<t)
	{
		scanf("%d",&n);
		if(n<3 || n==4 || n==7)
		{
			printf("-1\n");
			p++;
			continue;
		}
		if(n==3)
		{
			printf("555\n");
			p++;
			continue;
		}
		if( (n%3) == 0)
		{
			for(i=0;i<n;i++)
				printf("5");
			printf("\n");
			p++;
			continue;
		}
		
		if( (n%3) == 2 && n>5)
		{
			n = n - 5;
			for(i=0;i<n;i++)
				printf("5");
			for(i=0;i<5;i++)
				printf("3");
			printf("\n");
			p++;
			continue;
		}
		
		if( (n%3) == 1 && n>10)
		{
			n = n - 10;
			for(i=0;i<n;i++)
				printf("5");
			for(i=0;i<10;i++)
				printf("3");
			printf("\n");
			p++;
			continue;
		}
		if( (n%5) == 0)
		{
			for(i=0;i<n;i++)
				printf("3");
			p++;
			printf("\n");
			continue;
		}
		
		p++;
	}
	return 0;
}

