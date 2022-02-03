/*
    Question Link: https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/charged-up-array-f35a5e23/

    Solution: 1. Number of times a number appears in subsets is 2^(n-1).
				 (Suppose eleement is not there in the array then total elements is n-1 and total subsets possible is 2^(n-1))
				 (So in these 2^(n-1) subsets the element will not be present)
				 (So number of subsets element present is 2^n - 2^(n-1)  i.e. 2^(n-1))
	
	Time Complexity : O(n*logn)

	Space Complexity : O(1)

*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1000000007;
int main(){
	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		ll temp, res = 0;
		for(int i=0;i<n;i++){
			cin>>temp;
			if(temp >= pow(2,n-1))
				res = (res + temp%mod)%mod;
		}
		cout<<res<<"\n";
	}
	return 0;
}
