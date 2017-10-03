#include <stdio.h>
#include <math.h>
int main()
{
	int t,p=0;
	scanf("%d",&t);
	while(p<t)
	{
		int l,b,area,y,x,gcd1,i,t1;
		float k1;
		scanf("%d %d",&l,&b);
		area = l*b;
		//m1 = sqrt(l);
		//m2 = sqrt(b);
		x = l;
  		y = b;
 		while (y != 0) {
    		t1 = y;
   			y = x % y;
    		x = t1;
  		}
  		gcd1 = x;
    	//printf("%d\n",gcd1);
    	printf("%d\n",(l/gcd1)*(b/gcd1));
		p++;
	}
	return 0;
}
