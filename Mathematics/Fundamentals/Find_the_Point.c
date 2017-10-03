#include <stdio.h>
int main()
{
	int t,i=0;
	scanf("%d",&t);
	while(i<t)
	{
		int x1,x2,x3,y1,y2,y3;
		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
		x3 = (2*x2)-x1;
		y3 = (2*y2)-y1;
		printf("%d %d\n",x3,y3);
		i++;
	}
	return 0;
}
