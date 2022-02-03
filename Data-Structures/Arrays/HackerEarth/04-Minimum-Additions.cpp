/*
    Question Link : https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/minimum-additions-0142ac80/

    Solution:  floor((sum + numbers_sum)/(n + numbers_count)) <= k

               We want numbers_count to be minimum. So the numerator(numbers_sum) must be zero.

               floor(sum/(n + numbers_count)) <= k

               [sum/(n + numbers_count)] <= k 

               sum/(n + numbers_count) < k+1        (Using Concept of Step function in maths)

               sum/(k+1) < n + numbers_count

               numbers_count = [sum/(k+1)] - n + 1 
    
    Time Complexity : O(1)

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
		ll k, temp, sum = 0;
		cin>>n>>k;
		for(int i=0;i<n;i++){
			cin>>temp;
			sum += temp;
		}
		if ((sum/n) <= k)
			cout<<0<<"\n";
		else
			cout<< (sum/(k+1)) - n + 1<<"\n";
	}
	return 0;
}
