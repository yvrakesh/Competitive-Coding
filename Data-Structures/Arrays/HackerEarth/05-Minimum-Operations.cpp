/*
    Question Link : https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/minimum-operations-2-8000e855/

    Solution: Find number of consecutive distinct elements in the array.

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
	int n;
	cin>>n;
	ll prev, curr;
	cin>>prev;
	int res = 1;
	for(int i=1;i<n;i++){
		cin>>curr;
		if(curr != prev){
			prev = curr;
			res++;
		}
	}
	cout<<res<<endl;
	return 0;
}