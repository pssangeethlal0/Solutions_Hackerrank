#include <bits/stdc++.h>
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
#define next cout<<"\n";
#define fa(i,a) for(auto i:a)
#define sp(n) cout<<fixed<<setprecision(n);
#define  gcd(a,b)    __gcd(a,b)
#define bs  binary_search
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define mod 1000000007
using namespace std;

int main()
{
    fast
    ll n,k,i;
    cin>>n>>k;
    ll sum=0;
    vector< ll >v;
    for(i=0;i<n;i++){
        ll l,t;
        cin>>l>>t;
        if(t==1){
            v.pb(l);
        }
        if(t==0){
            sum+=l;
        }
    }
    sort(v.begin(),v.end(),greater< ll >());
    for(i=0;i<v.size();i++){
    if(i<k){
        sum+=v[i];
    }
    else{
        sum-=v[i];
    }
    }
    cout<<sum;
    return 0;
}
