/*
    Question Link: https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/infinity-array-715a233b/

    Solution : 1. Find sum until before to left element (i.e. left_index/n gives number of complete sets + left_index%n Offset).
               2. Find sum until right element including.
               3. Difference is the required sum. (To avoid negatives add modulo to the difference)
    
    Time Complexity : O(n)

    Space Complexity : O(1)
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll p = 1000000007;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		ll suff[n+1], temp;
		suff[0] = 0;
		for(int i=1;i<=n;i++){
			cin>>temp;
			suff[i] = (suff[i-1] + temp)%p;
		}
		int q;
		cin>>q;
		ll a[q],b[q];
		for(int i=0;i<q;i++)
			cin>>a[i];
		for(int i=0;i<q;i++)
			cin>>b[i];
		for(int i=0;i<q;i++){
			ll l = a[i]-1, r = b[i];
			ll sum1 = (suff[l%n] + ((l/n)%p * suff[n])%p)%p;
			ll sum2 = (suff[r%n] + ((r/n)%p * suff[n])%p)%p;
			cout<<(sum2 - sum1 + p)%p<<" ";
		}
		cout<<"\n";
	}
	return 0;
}