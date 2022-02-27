/*
    Question Link: https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/bracket-sequence-1-40eab940/

    Solution 1 : Start with an index and traverser n-1 elements to check if all brackets are closed.
               At any point if you get more closed brackets i.e. open bracket count < zero stop and go to next index.

    Time Complexity : O(n^2)

    Space Complexity : O(1)

    Solution 2 : 1. Count number of closed brackets and if a new closed bracket occur without an earlier open bracket reduce count to zero
				 and increment the count with a hope that there will be open brackets later and an index corresponding will make it bracket sequence.
				 2. Also in between if we come across bracket sequence pairs, Increment the count since they can be shifted right.
				 3. After reaching end of the string if there are any open bracket or closed bracket left there is no possibility for bracket sequence.
				 4. So make count zero, Otherwise return the count.
	
	Time Complexity : O(n)

	Space Complexity : O(1)
*/

// Solution 1
#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
	string s;
	cin>>s;
	int l = s.length(), res = 0;
	for(int i=0;i<l;i++){
		int c = 0;
		if(s[i] == '('){
			for(int j=i;j<i+l;j++){
				if(s[j%l] == '(')
					c++;
				else
					c--;
				if(c < 0)
					break;
			}
			if(c == 0)
				res++;
		}
	}
	cout<<res<<endl;
}


// Solution 2
#include<iostream>
#include<climits>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 	string s;
 	cin>>s;
 	int l = s.length(), res = 0, max_close = INT_MAX, open = 0;
 	for(int i=0;i<l;i++){
		if(s[i] == '(')
			open++;
		else
			open--;
    // We are making the count to zero if there is a new closed bracket without an open bracket (Since it violates Bracket sequence)
	if(max_close > open){
		max_close = open;
		res = 0;
	}
    // Incrementing count with a hope that an open bracket comes next and it will be the index for bracket sequence ( When res = 0 )
	// Also if there is a bracket pair in between it will be a new index for a bracket sequence
	if(max_close == open)
		res++;
	}
    // If it's end of string and you have open brackets or closed brackets left then it's not a perfect sequence with any index
 	if(open)
		cout<<0<<endl;
	else
		cout<<res<<endl;
}
