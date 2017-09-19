#include <stdio.h>
int main()
{
	int c;
	unsigned long long num, r;
	scanf("%llu %d",&r,&c);
	if((r%2)==0)
	{
		num = ((r/2) - 1)*10 + ((c*2)-1);
		printf("%llu\n",num);
	}
	if((r%2)!=0)
	{
		num = ((r/2)*10) + 2*(c-1);
		printf("%llu\n",num);
	}
	return 0;
}
