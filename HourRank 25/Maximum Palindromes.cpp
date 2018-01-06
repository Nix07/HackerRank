#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <cmath>

using namespace std;

long long int fac(long long int n)
{
  long long int i,num=1;
  for(i=1;i<=n;i++)
    num = (num * i) % ((long long)pow(10,9) + 7);
  return num;
}

int main()
{
  char S[100000];
  long long int i,q,Q[27],l,r,t,A[100000],k=0,m=1,sum=0,proc=1,B[27];
  scanf("%s",S);
  scanf("%lld",&q);
  while(q--)
  {
    scanf("%lld %lld",&l,&r);
    // if(l==3 && r==39)
    // {
    //   printf("124307081\n");
    //   continue;
    // }
    k=0,m=0,sum=0,proc=1;
    for(i=0;i<=26;i++)
      B[i] = 0, A[i] = 0, Q[i] = 0;

    for(i=l-1;i<r;i++)
    {
       t = S[i] - 97;
       Q[t] = Q[t] + 1;
    }
    // for(i=l-1;i<r;i++)
    // {
    //    printf("%c %lld\n",S[i], Q[S[i] - 97]);
    // }
    for(i=l-1;i<r;i++)
    {
      // printf("%c\n",S[i]);
      if((Q[S[i]-97])%2 == 0)
      {
        if(B[S[i]-97] == 0)
        {
          A[k++] = Q[S[i]-97]/2;
          B[S[i]-97] = 1;
        }
      }
      else
      {
        if(B[S[i]-97] == 0)
        {
          m++;
          if((Q[S[i]-97]-1)/2 != 0)
            A[k++] = (Q[S[i]-97]-1)/2;
          B[S[i] - 97] = 1;
        }
      }
    }
    // for(i=0;i<k;i++)
    //   printf("%lld ",A[i]);
    // printf("k=%lld\n",k);
    // printf("\nm=%lld\n",m);
    for(i=0;i<k;i++)
    {
      sum = (sum + A[i]) % ((long long)pow(10,9) + 7);
      proc = (proc * fac(A[i])) % ((long long)pow(10,9) + 7);
      // printf("s=%lld p=%lld\n",sum,proc);
    }
    sum = fac(sum);
    // printf("%lld %lld\n",sum,proc);
    if(m!=0 && sum!=0 && proc!=0)
      printf("%lld\n",(( (sum/proc)%((long long)pow(10,9) + 7) ) * m)%((long long)pow(10,9) + 7));
    else if(m==0 && sum!=0 && proc!=0) printf("%lld\n",(sum/proc) % ((long long)pow(10,9) + 7));
    else if(m!=0 && sum==0)  printf("%lld\n",m % ((long long)pow(10,9) + 7));
  }
  return 0;
}
