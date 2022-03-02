/* Question Link: https://leetcode.com/tag/prefix-sum

    Time Complexity : O(n)
*/
#include<bits/stdc++.h>
using namespace std;
vector <int> prefix_sum(int arr[],int n){
    vector <int> pref_sum(n);
    pref_sum[0] = arr[0];
    for(int i=1;i<n;i++)
        pref_sum[i] = pref_sum[i-1] + arr[i];
    return pref_sum;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    vector <int> pref_arr = prefix_sum(a,n);
    for(int i=0;i<n;i++)
        cout<<pref_arr[i]<<" ";
    cout<<endl;
    return 0;
}