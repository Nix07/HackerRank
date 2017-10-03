#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int n, A[100000], i, min=10000000, temp;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
       scanf("%lld",&A[i]);
    sort(A,A+n);
    for(i=0;i<n;i++){
        temp = A[i] - A[i-1];
        if(temp < 0)
          temp = -temp;
        if(temp < min)
           min = temp;
    }
    printf("%lld\n",min);
    return 0;
}

