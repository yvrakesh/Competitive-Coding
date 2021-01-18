/*
    Problem Link : https://www.codechef.com/problems/NDIFFPAL
    Problem Name : N Different Palindromes
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
    int t;
    cin>>t;
    f(i,0,t){
        int n;
        cin>>n;
        char a[] = {'a','b','c','d'};
        f(i,0,n)
            printf("%c",a[i%4]);
        printf("\n");
    }
    return 0;
}