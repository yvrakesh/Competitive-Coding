/*
    Question Link: https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/maximize-modulo-2-0cb15ded/

    Solution: 1. Calculate suffix sum
              2. If a element is removed
                i) It's suffix sum (i.e. sum of elements to the right) doesn't change
                ii) It's prefix sum will decrease by 10 (But modulo division isn't commutative)
              3. So while traversing save prefix sum and store maximum of (prefix sum + suffix sum)
    
    Time Complexity : O(n * log m)

    Space Complexity : O(n)

*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
// Binary Exponentiation to find a power b in the modulo m
ll binpow(ll a,ll b,ll m){
    ll ans = 1;
    while(b>0){
        if(b%2)
		ans = (ans*a)%m;
        a=(a*a)%m;
        b>>=1;
    }
    return ans;
}
int main(){
	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int m,k;
		cin>>m>>k;
		string s;
		cin>>s;
		vector <int> suff(m,0);
		ll curr = 1;
		for(int i=m-1;i>=0;i--){
			suff[i] = (curr*(s[i]-'0'))%k;
			// Modulo arithmetic is commutative
			curr = (curr * 10LL)%k;
		}
		for(int i=m-2;i>=0;i--)
			suff[i] = (suff[i]+suff[i+1])%k;
	    ll res, sum = (s[0]-'0')*binpow(10,m-2,k);
		// Check whether removing first element is good
		res = max(suff[0],suff[1]);
	    for(ll i=1;i<m;i++){
	        curr = 0;
			// Removing ith index element
	        if(i+1<m)
				curr=suff[i+1];
			curr = (curr + sum)%k;
	        res = max(res,curr);
			// Modulo division is not commutative. So Calculate Prefix sum.
			// After removing next element all elements before that elements has to be decreased by one power for this calculate prefix sum till current element
	        sum = (sum + (s[i]-'0')*binpow(10,m-i-2,k));
	    }
	    cout<<res<<endl;
	}
	return 0;
}
