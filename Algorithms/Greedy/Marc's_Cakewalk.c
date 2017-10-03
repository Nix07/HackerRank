#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n, A[100], walk=0, i;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
       scanf("%lld",&A[i]);
    sort(A, A+n, greater<int>());

    for(i=0;i<n;i++){
        walk += A[i] * pow(2,i);
        //printf("w = %lld\n",walk);
    }
    printf("%lld\n",walk);
    return 0;
}
