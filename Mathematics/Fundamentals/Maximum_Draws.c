#include <stdio.h>
int main()
{
	int t,i=0;
	scanf("%d",&t);
	while(i<t)
	{
		int pair;
		scanf("%d",&pair);
		printf("%d\n",pair+1);
		i++;
	}
	return 0;
}
