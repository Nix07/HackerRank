#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long sim[3000][3000];

long fncr(int n,int r){

    if(r==0 || n==0 || n==r){

        return 1;

    }else if(sim[n][r]!=0){

        return sim[n][r];

    }

    else{

        sim[n][r] = (fncr(n-1,r)+fncr(n-1,r-1))%1000000007;

        return sim[n][r]; 

    }

}

int main() { 

    int many;

    cin>>many;

    for(int x=0;x<many;x++){

        int n,m;

        cin>>n;

        cin>>m;

        cout<<fncr((n+m-1),m-1)<<endl;

    }

    return 0;

}
