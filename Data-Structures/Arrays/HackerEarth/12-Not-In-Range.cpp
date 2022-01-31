/*
    Question Link: https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/not-in-range-44d19403/

    Solution : 1. Mark starting of the range by incrementing.
               2. Decrease next element to the range end.
               3. When ever sum is 0 that element is missing in the range queries.
               4. For this find it's prefix sum.
    
    Time Complexity : O(n)

    Space Complexity : O(n) (i.e. Extra space for 10^6 array)

*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin>>n;
	int a[1000001]={0}, left, right;
	for(int i=0;i<n;i++){
		cin>>left>>right;
		a[left]++;
		a[right+1]--;
	}
	for(int i=1;i<1000001;i++)
		a[i] += a[i-1];
	ll res = 0;
	for(int i=1;i<1000001;i++)
		if(a[i] == 0)
			res += i;
	cout<<res<<endl;
	return 0;
}