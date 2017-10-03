#include <stdio.h>
int main()
{
	int t,i=0;
	scanf("%d",&t);
	while(i<t)
	{
		int n,m;
		scanf("%d",&n);
		m = (n*(n-1))/2;
		printf("%d\n",m);
		i++;
	}
	return 0;
}