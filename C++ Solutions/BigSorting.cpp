#include<bits/stdc++.h>
using namespace std;
#define ot(x) cout<<x<<" ";
#define out(x) cout<<x<<"\n";
#define pb push_back
#define in insert
#define ll long long int
#define ld long double
#define ull unsigned long long int
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define yes cout<<"yes\n";
#define no cout<<"no\n";
#define Yes cout<<"Yes\n";
#define No cout<<"No\n";
#define fa(i,a) for(auto i:a)
#define f(i,x,a) for(i=x;i<a;i++)
#define next cout<<"\n";
#define sp(n) cout<<fixed<<setprecision(n);
#define  gcd(a,b)    __gcd(a,b)
#define bs  binary_search
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define test int t;cin>>t;while(t-->0)
#define mod 1000000007


bool myfunction (string i,string j) 
{ 
    int n=i.length();
    int m=j.length();
    if(n==m)
        return (i<j);
    
    return n<m;   
}

int main()
{
   fast
   int n,i;cin>>n;
   vector< string >v;
   f(i,0,n){
       string s;
       cin>>s;
       v.pb(s);     
   }
   sort(v.begin(),v.end(),myfunction);
   f(i,0,n){
       cout<<v[i]<<"\n";
   }
  return 0;
}
