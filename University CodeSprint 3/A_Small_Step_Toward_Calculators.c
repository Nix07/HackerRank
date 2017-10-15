#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, num1, num2;
	char A[100];
	scanf("%s",A);
	num1 = A[0] - '0';
	num2 = A[2] - '0';
	if(A[1] == '-')
		printf("%d\n",num1-num2);
	if(A[1] == '+')
		printf("%d\n",num1+num2);
	return 0;
}

