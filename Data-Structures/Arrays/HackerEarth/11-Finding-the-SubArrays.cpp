/*
    Question Link: https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/counting-the-subarrays-4187713a/

    Solution: 1. Store Prefix sums.
              2. Start from first index and increment end to the last.
              3. At each step compare subarray and remaining average.
              4. Since iterating from first to last, vector pair we are storing will be in sorted order.
    
    Time Complexity : O(n^2)

    Space Complexity : O(n)

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
	int n;
	cin>>n;
	int temp, pref[n+1];
	pref[0] = 0;
	for(int i=1;i<n+1;i++){
		cin>>temp;
		pref[i] = pref[i-1] + temp;
	}
	vector <pair <int,int>> res;
	for(int i=0;i<n;i++){
		int start = i+1, end = i, len;
		double diff, rem;
		while(++end <= n){
			len = end - start + 1;
			diff = pref[end] - pref[start-1];
			if(len != n)
				rem = (pref[n]-diff)/(n-len);
			else
				rem = 0;
			if(diff/len > rem)
				res.push_back({start,end});
		}
	}
	cout<<res.size()<<endl;
	for(auto i:res)
		cout<<i.first<<" "<<i.second<<"\n";
	return 0;
}
