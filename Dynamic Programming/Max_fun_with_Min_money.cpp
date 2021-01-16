/*
    Problem Link : https://www.spoj.com/problems/PARTY/
    Problem Name : Party Schedule
    This is a 0/1 Knapsack Problem
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
int main(){
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    forever{
        int m,n;
        cin>>m>>n;
        if(m || n){
            int a[n][2];
            f(i,0,n)
                cin>>a[i][0]>>a[i][1];
            int dp[n+1][m+1];
            f(i,0,m+1)
                dp[0][i] = 0;
            f(i,0,n+1)
                dp[i][0] = 0;
            f(i,1,n+1)
                f(j,1,m+1)
                    dp[i][j] = j-a[i-1][0]>=0?max(dp[i-1][j],dp[i-1][j-a[i-1][0]]+a[i-1][1]):dp[i-1][j];
            int v = dp[n][m],res = 0;
            f(i,0,m+1){
                if(dp[n][i]==v){
                    res = i;
                    break;
                }
            }
            prints(res);
            println(dp[n][m]);
        }
        else
            break;
    }
    return 0;
}