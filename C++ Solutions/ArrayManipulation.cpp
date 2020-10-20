#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n,m, x=0, max =0, p, q, sum;
    

    cin >> n >> m;
    long int *a=new long int[n+1]();

    for(long int i=0; i<m; i++){
        cin >> p >> q >> sum;
        a[p] += sum;

        if(q+1 <= n){
            a[q+1] -= sum;
        }

    }

    for (long int i=1; i<=n; i++){
        x += a[i];

        if(max<x){
            max = x;
        }
    }

    cout << max;
}
