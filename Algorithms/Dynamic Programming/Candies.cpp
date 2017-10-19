#include <iostream>
#include <cstdio>
using namespace std;
long long int n,A[100000],i,B[100000],count=0,H[100000];

long long int Value(int index)
{	
	if(H[index] != 1)
		return H[index];
	if(A[index] <= A[index+1] || (index+1) >=n)
		return 1;

	else
	{
		H[index] = Value(index + 1) + 1;
		return H[index];	
	}
	
}

int main() {
	scanf("%lld",&n);
	for(i=0;i<n;i++)
		scanf("%lld",&A[i]);
	for(i=0;i<n;i++)
		B[i] = 1,H[i] = 1;
	
	for(i=1;i<n;i++)
	{
		if(A[i] > A[i-1])
			B[i] = max(B[i], B[i-1]+1);
		
		if(A[i] < A[i-1])
			B[i-1] = max(B[i-1],Value(i) + 1);
	}
	
	for(i=0;i<n;i++)
	{
		count += B[i];	
	}
	printf("%lld\n",count);
	return 0;
}
