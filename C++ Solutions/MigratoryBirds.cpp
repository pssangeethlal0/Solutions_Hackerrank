#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int mibirds(long a[],long n){
    sort(a,a+n,greater< long >());
    unordered_map<long ,long>mp;
    for(long i=0;i<n;i++){
        mp[a[i]]++;
    }
    long max=0,res=-1;
    for(auto x : mp){
        if(x.second>max){
            res=x.first;
            max=x.second;
        }
    }
   return res; 
}

int main(){
   long n,i;
   cin>>n;
   long a[n];
   for(i=0;i<n; i++){
       cin>>a[i];
   }
   sort(a,a+n);
   cout<<mibirds(a,n);
   return 0;  
}
