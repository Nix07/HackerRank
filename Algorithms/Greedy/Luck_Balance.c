#include <cstdio>
#include <algorithm>
using namespace std;

bool comp(int a, int b)
{
	return a>b;
}

int main()
{
	int n,k,A[1000], luck=0, m=0, i, t, l;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&t,&l);
		if(l==1)
			A[m++] = t;
		else 	
			luck += t;
	}
	sort(A,A+m,comp);
	for(i=0;i<k;i++)
		luck += A[i];
	for(i=k;i<m;i++)
		luck -= A[i];
	printf("%d\n",luck);
	return 0;
}

