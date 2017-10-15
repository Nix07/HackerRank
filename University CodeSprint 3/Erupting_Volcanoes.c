#include <stdio.h>

struct volcano{
	int x,y,w;
};

int main()
{
	struct volcano vol[1000];
	int i,j,n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	for(i=0;i<m;i++)
		scanf("%d %d %d",&vol[i].x,&vol[i].y,&vol[i].w);
	int A[n][n];
	
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			A[i][j] = 0;

	int k = 1,x1,x2,y1,y2;
	for(i=0;i<m;i++)
	{
		A[vol[i].x][vol[i].y] += vol[i].w;
		k = 1;
		while(k)
		{
			x1 = vol[i].x - k, x2 = vol[i].x + k;
			y1 = vol[i].y - k, y2 = vol[i].y + k;
			
			if((vol[i].w - k) <= 0)
				break;
				
			for(j=x1;j<=x2;j++)
			{
				if(j>=0 && j<=n-1 && y1>=0)
				{
					A[j][y1] += vol[i].w - k;		
				}
			}
			
			for(j=x1;j<=x2;j++)
			{
				if(j>=0 && j<=n-1 && y2<=n-1)
				{
					A[j][y2] += vol[i].w - k;	
				}
			}	
			
			if(x1 >=0)
			{
				for(j=y1+1;j<y2;j++)
				{
					if(j<0 || j>n-1)
						continue;
					else
					{
						A[x1][j] += vol[i].w - k;	
					}
				}	
			}
			
			for(j=y1+1;j<y2;j++)
			{
				if(j>=0 && j<=n-1 && x2<=n-1)
				{
					A[x2][j] += vol[i].w - k;	
				}
			}
			
			k++;
		}	
	}
	
	int max = A[0][0];
	
	for(i=0;i<n;i++)
	{
	 	for(j=0;j<n;j++)
	 	{
	 		if(max < A[i][j])
	 			max = A[i][j];
	 	}
	}
	
	printf("%d\n",max);
	
	return 0;
}

