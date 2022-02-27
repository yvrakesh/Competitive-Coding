/*
    Question Link: https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/pairs-having-similar-element-eed098aa/

    Solution: 1. Sort the array.
              2. Check continuous elements if they're equal or difference is 1.
              3. Check if all elements are equal but there's no element with difference 1. (Then they shouldn't be counted)
              4. Now it's selecting 2 pairs from n pairs i.e nC2 or (n * (n-1))/2
	
	Time Complexity : O(n * logn)

	Space Complexity : O(1)
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
	int n;
	cin>>n;
	ll a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	int eq = 1, cnt = 1;
	ll res = 0;
	for(int i=1;i<n;i++){
		eq = 1;
		cnt = 1;
		while(a[i]-a[i-1] < 2){
			cnt++;
			if(a[i] == a[(i++)-1])
				eq++;
		}
		if(cnt > 1 && cnt != eq)
			res += ((ll)(cnt)*(ll)(cnt-1))/2;
	}
	cout<<res<<endl;
	return 0;
}
