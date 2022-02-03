/* Question Link : https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/minor-4-41918cb8/

    Solution : Find the Minimum element in the array. 

    Reason : Because Bitwise OR with a number will be always greater than or equal to that number.

             Hence to get minimum K, Size of Non Empty Subset must be 1.
 
    Time Complexity : O(n)

    Space Complexity : O(1)
*/
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int temp, res;
        cin>>res;
        for(int i=1;i<n;i++){
            cin>>temp;
            if(temp < res)
                res = temp;
        }
        cout<<res<<"\n";
    }
    return 0;
}
