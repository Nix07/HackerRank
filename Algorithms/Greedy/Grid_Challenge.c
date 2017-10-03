#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int t,p=0,n,i,j, flag = 1;
	char A[100][100], min2 = 'z';
	scanf("%d",&t);
	while(p<t)
	{
		flag = 1;
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%s",A[i]);
		for(i=0;i<n;i++)
			sort(A[i], A[i]+n);
		
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-1;j++)
            {
                if(A[j][i] <= A[j+1][i])
                {
                    continue;
                }

                else
                {
                    flag = 0;
                    printf("NO\n");
                    break;
                }
            }
            if(flag == 0)   break;
        }	
		
		
		if(flag)
			printf("YES\n");
		p++;
	}
	return 0;
}
