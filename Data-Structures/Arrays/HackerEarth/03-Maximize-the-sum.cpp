/*
    Question Link: https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/maximize-sum-0423b95e/

    Solution: Insert positive elements into map so that we now have disinct elements and their counts.

              We have to choose at most K distinct numbers to get maximum sum.

              Take sum of each occurences into a vector and sort in decreasing order.

    Time Complexity : O(n*logn)

    Space Complexity : O(n)
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n,k;
		cin>>n>>k;
		ll temp;
		map <ll,int> mp;
		for(int i=0;i<n;i++){
			cin>>temp;
			if(temp > 0)
				mp[temp]++;
		}
		ll sum = 0;
		vector <ll> v;
		for(auto i:mp)
			v.push_back(i.first*i.second);
		sort(v.begin(),v.end(),greater<ll>());
		int l = v.size();
		if(l > k)
			l = k;
		for(int i=0;i<l;i++)
			sum += v[i];
		cout<<sum<<"\n";
	}
	return 0;
}
