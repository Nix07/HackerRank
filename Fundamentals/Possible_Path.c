#include <stdio.h>
#include <math.h>
int main()
{
	int t,p=0,i;
	scanf("%d",&t);
	while(p<t)
	{
		int a,b,x,y,gcd1=0,gcd2=0,m1,m2;
		scanf("%d %d %d %d",&a,&b,&x,&y);
		if(a==0 && b==0)
		{
			printf("NO");
			p++;
			continue;
		}
		m1 = sqrt(a),m2=sqrt(b);
		 for(i=1; i <= m1 || i <= m2; ++i)
    	{
    		if(a == b)
    		{
    			gcd1 = a;
    			break;
    		}
			if(a%i==0 && b%i==0)
            	gcd1 = i;
    	}
    	m1 = sqrt(x),m2=sqrt(y);
    	for(i=1; i <= m1 || i <= m2; ++i)
    	{
    		if(x == y)
    		{
    			gcd2 = x;
    			break;
    		}
			if(y%i==0 && x%i==0)
            	gcd2 = i;
    	}
    	if(a==1 && b==1)
    	{
    		printf("YES\n");
    		p++;
    		continue;
    	}
    	if(gcd1 == gcd2)
    	{
    		printf("YES\n");
    		p++;
    		continue;
    	}
    	else printf("NO\n");
		p++;
	}
	return 0;
}
