#include <cstdio>

int main()
{
  long long int t,n,A[1000000],i,temp,sum=0;
  scanf("%lld",&t);
  while(t--)
  {
    scanf("%lld",&n);
    for(i=0;i<n;i++)
      scanf("%lld",&A[i]);
    sum=0;
    for(i=0;i<n;i++)
    {
      temp = A[i];
      while(temp>0)
      {
        sum += temp % 10;
        temp = temp / 10;
      }
    }
    if((sum%3) == 0)
      printf("Yes\n");
    else  printf("No\n");
  }
  return 0;
}
