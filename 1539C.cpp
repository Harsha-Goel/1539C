#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for(ll i = a; i<= b ; i++)
#define loopr(i,a,b) for(ll i = a; i>=b ; i--)
#define no cout<<"NO"<<endl
#define yes cout<<"YES"<<endl
#define nn <<"\n"
#define all(x) (x).begin(), (x).end()
#define in INT_MAX
int main(int argc,char const * argv[]){
    ll n,k,x;
    cin>>n>>k>>x;
    ll a[n];
    loop(i,0,n-1){
        cin>>a[i];
    }
    sort(a,a+n);
    ll cnt=0;
    if(n==1){
        cout<<1;
        return 0;
    }
    vector<ll> v(0);
    loop(i,0,n-2){
        if((a[i+1]-a[i])>x){
            ll q=(a[i+1]-a[i]-1)/x;
            v.push_back(q);
        }
    }
    ll o=-1;
    sort(all(v));
    if(v.size()==0){
        cout<<1;
        return 0;
    }
    loop(i,0,v.size()-1){
        cnt+=v[i];
        if(v[i]==0){
            break;
        }
        if(cnt>k){
            o=i;
            break;
        }
    }
    
    if(o!=-1){
    cout<<v.size()-o+1 nn;
    }
    else{
        cout<<1;
    }
    
    return 0;
}