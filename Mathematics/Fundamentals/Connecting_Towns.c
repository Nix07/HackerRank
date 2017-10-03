#include <stdio.h>
int main()
{
	int t,p=0;
	scanf("%d",&t);
	while(p<t)
	{
		int n,i;
		scanf("%d",&n);
		int A[n],var=1;
		for(i=0;i<n-1;i++)
			scanf("%d",&A[i]);
		for(i=0;i<n-1;i++)
		{
			var = var * A[i];
			var = var % 1234567;
		}
		printf("%d\n",var);
		p++;
	}
	return 0;
}