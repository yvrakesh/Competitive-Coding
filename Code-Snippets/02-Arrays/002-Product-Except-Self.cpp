/* Question Link: https://leetcode.com/problems/product-of-array-except-self/

    Time Complexity : O(n)
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums) {
    int left_product = 1, right_product = 1, n = nums.size();
    vector <int> res(n,1);
    for(int i=0;i<n;i++){
        res[i] *= left_product;
        res[n-1-i] *= right_product;
        left_product *= nums[i];
        right_product *= nums[n-1-i];
    }
    return res;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    vector <int> prod_vector = productExceptSelf(v);
    for(auto i:prod_vector)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}