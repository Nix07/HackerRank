#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	long long int n,m,C[1000],i,DP[1000][1000],j;
	scanf("%lld %lld",&n,&m);
	for(i=1;i<=m;i++)
			scanf("%lld",&C[i]);
	
	for(i=0;i<=n;i++)
		DP[i][0] = 0;
	for(i=0;i<=m;i++)
		DP[0][i] = 1;

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			DP[i][j] = DP[i][j-1];
			if(C[j] <= i)
			{
				DP[i][j] = DP[ i - C[j] ][j] + DP[i][j-1];
			}
		}
	}
	printf("%lld\n",DP[n][m]);
	return 0;
}
