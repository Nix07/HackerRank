#include <stdio.h>

int A[100][100],i,j,n;

void move_right(int x, int y)
{
	for(i=y+1;i<n;i++)
		A[x][i] = A[x][i-1] + 1;
}

void move_left(int x, int y)
{
	for(i=y-1;i>=0;i--)
		A[x][i] = A[x][i+1] + 1;
}

void move_down(int x, int y)
{
	for(i=x+1;i<n;i++)
		A[i][y] = A[i-1][y] + 1;
}

void move_up(int x, int y)
{
	for(i=x-1;i>=0;i--)
		A[i][y] = A[i+1][y] + 1;
}

void move_single_left(int x, int y)
{
	A[x][y-1] = A[x][y] + 1;
}

void move_single_right(int x, int y)
{
	A[x][y+1] = A[x][y] + 1;
}

void move_single_down(int x, int y)
{
	A[x+1][y] = A[x][y] + 1;
}

void move_single_up(int x, int y)
{
	if(x!=0)
		A[x-1][y] = A[x][y] + 1;
}

void move_up_while(int x, int y)
{
	for(i=x-1;i>=1;i--)
	{
		if(A[i][y] == 0)
			A[i][y] = A[i+1][y] + 1;
	}
}

void move_down_while(int x, int y)
{
	for(i=x+1;i<n;i++)
	{
		if(A[i][y] == 0)
			A[i][y] = A[i-1][y] + 1;	
	}
}

void move_left_while(int x, int y)
{
	for(i=y-1;i>=0;i--)
	{
		if(A[x][i] == 0)
			A[x][i] = A[x][i+1] + 1;
	}
}

void move_right_while(int x, int y)
{
	for(i=y+1;i<n;i++)
	{
		if(A[x][i] == 0)
			A[x][i] = A[x][i-1] + 1;
	}
}

int main()
{
	int x,y;
	char dir;
	scanf("%d",&n);
	scanf("%s",&dir);
	scanf("%d %d",&x,&y);
	
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			A[i][j] = 0;
	
	A[x][y] = 1;
	
	//For East
	if(dir == 'e')
	{
		if( x+1 < n && y+1 < n) //0,0
		{
			move_right(x,y);	
			move_down(x,y+n-1);
			move_single_left(x+n-1, y+n-1);
			
			int left = n - 1;
			while(left > 0)
			{
				move_up_while( (x+n-1), left-1 );
				move_single_left(1, left-1);
				
				left--;
				if(left <= 0)
					break;
				
				move_down(1,left-1);
				
				move_single_left(n-1, left-1);
				left--;
			}
		}	
		
		if( x+1 >=n && y+1 < n) //n-1,0
		{
			move_right(x,y);
			move_up(x,y+n-1);
			move_single_left(x-(n-1), y+n-1);
			
			int left = n - 1;
			while(left > 0)
			{
				move_down_while(0, left-1);
				move_single_left(n-2, left-1);
				
				left--;
				if(left <= 0)
					break;
			
				move_up(n-2, left-1);
					
				move_single_left(0, left-1);
				left--;
			}
		}
		
		if( x+1 < n && y+1 >= n) //0,n-1
		{
			move_down(x,y);
			move_single_left(x+n-1, y);
			
			int left = n - 1;
			while(left > 0)
			{
				move_up(n-1, left-1);
				move_single_left(0, left-1);
				
				left--;
				if(left <= 0)
					break;
				
				move_down(0, left-1);
				move_single_left(x+n-1, left-1);
				left--;
			}
		}
		
		if( x+1 >=n && y+1 >= n) //n-1,n-1
		{
			move_up(x,y);
			move_single_left(x-(n-1), y);
			
			int left = n - 1;
			while(left > 0)
			{
				move_down(0, left-1);
				move_single_left(n-1, left-1);
				
				left--;
				if(left <= 0)
					break;
				
				move_up(n-1, left-1);
				move_single_left(0, left-1);
				left--;
			}
		}
	}
	
	//For North
	if(dir == 'n')
	{
		if( x+1 < n && y+1 < n) //0,0
		{
			int down = 0;
			while(down < n)
			{
				move_right(down,0);	
				move_single_down(down, n-1);
				
				down++;
				
				move_left(down, n-1);
				move_single_down(down,0);
				down++;
			}
		}	
		
		if( x+1 >=n && y+1 < n) //n-1,0
		{
			move_up(x,y);
			move_right(0,0);
			move_single_down(0, n-1);
			
			int down = 1;
			while(down < n)
			{
				move_left_while(down, n-1);
				move_single_down(down, 1);
				
				down++;
				
				move_right(down, 1);
				move_single_down(down,n-1);
				down++;
			}
		}
		
		if( x+1 < n && y+1 >= n) //0,n-1
		{
			int down = 0;
			while(down < n)
			{
				move_left(down, n-1);	
				move_single_down(down, 0);
				
				down++;
				
				move_right(down, 0);
				move_single_down(down, n-1);
				down++;
			}
		}
		
		if( x+1 >=n && y+1 >= n) //n-1,n-1
		{
			move_up(n-1,n-1);
			move_left(0,n-1);
			move_single_down(0, 0);
			
			int down = 1;
			while(down < n)
			{
				move_right_while(down, 0);
				move_single_down(down, n-2);
				
				down++;
				
				move_left(down, n-2);
				move_single_down(down,0);
				down++;
			}
		}
	}
	
	//For West
	if(dir == 'w')
	{
		if( x+1 < n && y+1 < n) //0,0
		{
			int right = 0;
			while(right < n)
			{
				move_down(0,right);
				move_single_right(n-1,right);
				
				right++;
				
				move_up(n-1, right);
				move_single_right(0, right);
				right++;
			}
		}	
		
		if( x+1 >=n && y+1 < n) //n-1,0
		{
			int right = 0;
			while(right < n)
			{
				move_up(n-1, right);
				move_single_right(0,right);
				
				right++;
				
				move_down(0, right);
				move_single_right(n-1, right);
				right++;
			}
		}
		
		if( x+1 < n && y+1 >= n) //0,n-1
		{
			move_left(x,y);
			move_down(0,0);
			move_single_right(n-1, 0);
			
			int right = 1;
			while(right < n)
			{
				move_up_while(n-1, right);
				move_single_right(1, right);
				
				right++;
				
				move_down(1, right);
				move_single_right(n-1,right);
				right++;
			}
		}
		
		if( x+1 >=n && y+1 >= n) //n-1,n-1
		{
			move_left(x,y);
			move_up(n-1,0);
			move_single_right(0, 0);
			
			int right = 1;
			while(right < n)
			{
				move_down_while(0, right);
				move_single_right(n-2, right);
				
				right++;
				
				move_up(n-2, right);
				move_single_right(0,right);
				right++;
			}
		}
	}

	//For South	
	if(dir == 's')
	{
		if( x+1 < n && y+1 < n) //0,0
		{
			move_down(x,y);
			move_right(n-1,y);
			move_single_up(n-1, n-1);
			
			int up = n - 1;
			while(up > 0)
			{
				move_left_while( up-1 ,n-1);
				move_single_up(up-1, 1);
				
				up--;
				if(up <= 0)
					break;
				
				move_right(up-1,1);
				move_single_up(up-1, n-1);
				up--;
			}
		}	
		
		
		if( x+1 >=n && y+1 < n) //n-1,0
		{
			move_right(x,y);
			move_single_up(n-1, n-1);
			
			int up = n - 1;
			while(up > 0)
			{
				move_left(up-1, n-1);
				move_single_up(up-1, 0);
				
				up--;
				if(up <= 0)
					break;
				
				move_right(up-1, 0);
				move_single_up(up-1, n-1);
				up--;
			}
		}
		
		if( x+1 < n && y+1 >= n) //0,n-1
		{
			move_down(x,y);
			move_left(n-1,n-1);
			move_single_up(n-1, 0);
			
			int up = n - 1;
			while(up > 0)
			{
				move_right_while( up-1,0);
				move_single_up(up-1, n-2);
				
				up--;
				if(up <= 0)
					break;
				
				move_left(up-1,n-2);
				move_single_up(up-1, 0);
				up--;
			}
		}
		
		if( x+1 >=n && y+1 >= n) //n-1,n-1
		{
			move_left(n-1,n-1);
			move_single_up(n-1, 0);
			
			int up = n - 1;
			while(up > 0)
			{
				move_right(up-1, 0);
				move_single_up(up-1, n-1);
				
				up--;
				if(up <= 0)
					break;
				
				move_left(up-1, n-1);
				move_single_up(up-1, 0);
				up--;
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d\t",A[i][j]);
		printf("\n");
	}
	return 0;
}
