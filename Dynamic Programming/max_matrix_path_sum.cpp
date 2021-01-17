/*
    Problem Link : https://www.spoj.com/problems/BYTESM2/
    Problem Name : Philosophers stone
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pi;
typedef pair<ll,ll> pl;
typedef set<int> si;
typedef set<int,greater<int>> sgi;
typedef stack<int> sti;
typedef stack<ll> stl;
typedef unordered_set<int> usi;
typedef unordered_set<ll> usl;
typedef queue<int> qi;
typedef queue<ll> ql;
typedef unordered_map<int,int> umi;
typedef unordered_map<ll,ll> uml;
typedef unordered_map<int,ll> umil;
typedef unordered_map<ll,int> umli;
typedef map<int,int> mi;
typedef map<ll,ll> ml;
typedef map<int,ll> mil;
typedef map<ll,int> mli;
#define endl "\n"
#define pb push_back
#define forever for(;;)
#define f(i,k,n) for(int i=k;i<n;i++)
#define ef(i,k,n) for(int i=k;i<=n;i++)
#define fl(i,k,n) for(ll i=k;i<n;i++)
#define efl(i,k,n) for(ll i=k;i<=n;i++)
#define vsort(v) sort(v.begin(),v.end())
#define intscan(a) scanf("%d",&a)
#define llscan(a) scanf("%lld",&a)
#define println(a) printf("%d\n",a)
#define llprintln(a) printf("%lld\n",a)
#define llprints(a) printf("%lld ",a)
#define prints(a) printf("%d ",a)
#define llprints(a) printf("%lld ",a)
#define coutln(a) cout<<a<<endl
#define couts(a) cout<<a<<" "
#define cout(a) cout<<a
int dp[101][101],a[101][101];
int max_sum(int i,int j,int n,int m){
    if(i<0 || i>=n || j<0 || j>=m)
        return 0;
    if(dp[i][j]+1)
        return dp[i][j];
    return dp[i][j] = a[i][j] + max(max_sum(i+1,j-1,n,m),max(max_sum(i+1,j,n,m),max_sum(i+1,j+1,n,m)));
}
int main(){
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    int t;
    cin>>t;
    f(i,0,t){
        memset(dp,-1,sizeof(dp));
        int n,m;
        cin>>n>>m;
        f(i,0,n)
            f(j,0,m)
                cin>>a[i][j];
        int res = 0;
        f(i,0,m){
            int temp = max_sum(0,i,n,m);
            if(temp>res)
                res = temp;
        }
        println(res);
    }
    return 0;
}