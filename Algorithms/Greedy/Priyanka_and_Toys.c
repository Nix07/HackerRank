#include <cstdio>
#include <algorithm>
 
using namespace std;
 
int main()
{
	int i,n, A[100000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	sort(A,A+n);
	int unit = 1, w = A[0];
	for(i=1;i<n;i++)
	{
		if(A[i] <= (w+4))
			continue;
		else
		{
			w = A[i];
			unit++;
			continue;
		}
	}
	printf("%d\n",unit);
	return 0;
}
