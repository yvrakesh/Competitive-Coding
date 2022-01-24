/*
    Question Link: https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/make-it-non-decreasing-7d3391fd/

    Time Complexity : O(n)

    Space Complexity : O(1)
*/
#include<iostream>
using namespace std;
typedef long long int ll;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		ll curr, prev;
		cin>>prev;
		cout<<prev<<" ";
		for(int i=1;i<n;i++){
			cin>>curr;
			prev = curr*(1 + (prev-1)/curr);
			cout<<prev<<" ";
		}
		cout<<"\n";
	}
	return 0;
}