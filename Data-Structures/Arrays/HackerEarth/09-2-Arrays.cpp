/*
    Question Link: https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/2-arrays-90c9019c/

    Solution: 1. If both arrays have atleast one -1 then infinite ways.
              2. If only one array has -1 and it's sum of other elements is greater than the second array then it's impossible.
              3. If only one -1 is present and it's sum is less than the other array then only one way.
              4. If more than one -1 is present and it's sum is less than the other array then abs(sum1-sum2) + 1 ways possible.
    
    Time Complexity : O(n)

    Space Complexity : O(1)
*/
#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
	int n;
	cin>>n;
	int temp,a1 = 0, b1 = 0, sum1 = 0, sum2 = 0;
	for(int i=0;i<n;i++){
		cin>>temp;
		if(temp == -1)
			a1++;
		else
			sum1 += temp;
	}
	for(int i=0;i<n;i++){
		cin>>temp;
		if(temp == -1)
			b1++;
		else
			sum2 += temp;
	}
	if(a1 && b1)
		cout<<"Infinite\n";
	else if((a1 && sum1 > sum2) || (b1 && sum2 > sum1))
		cout<<"0\n";
	else if((a1 == 1 && sum1 < sum2) || (b1 == 1 && sum2 < sum1))
		cout<<"1\n";
	else
		cout<<abs(sum1-sum2)+1<<"\n";
	return 0;
}
