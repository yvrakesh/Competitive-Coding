#include<iostream>
using namespace std;
typedef long long int ll;
ll mod_exp_recur(ll a,ll n, ll p){
    if(!n)
        return 1;
    if(n%2)
        return (a*mod_exp_recur(a,n-1,p))%p;
    return mod_exp_recur((a*a)%p,n>>1,p)%p; // n/2 -> Left shifting n by 1 step
}
ll mod_exp_iter(ll a, ll n, ll p){
    ll res = 1;
    while(n > 0){
        if(n%2){
            res = (res*a)%p;
            n--;
        }
        else{
            a = (a*a)%p;
            n = n>>1; // n = n/2
        }
    }
    return res;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll a,n,p = 1e9+7;
    cin>>a>>n;
    cout<<mod_exp_recur(a%p,n,p)%p<<endl;
    cout<<mod_exp_iter(a%p,n,p)%p<<endl;
    return 0;
}