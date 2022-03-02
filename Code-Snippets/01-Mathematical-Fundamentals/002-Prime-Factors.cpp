/*
    Question Link : https://leetcode.com/problems/2-keys-keyboard/

    Time Complexity : O(√n)
*/
#include<bits/stdc++.h>
using namespace std;
void prime_factors(vector <pair <int,int>> &v, int n){
    if(n < 2)
        return;
    if(n == 2){
        v.push_back({2,1});
        return;
    }
    int factor = 2;
    while(n > 1 && factor * factor <= n){
        int freq = 0;
        while(!(n%factor)){
            n /= factor;
            freq++;
        }
        if(freq)
            v.push_back({factor,freq});
        factor++;
    }
    if(n > 1)
        v.push_back({n,1});
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vector <pair <int,int>> v;
    prime_factors(v,n);
    for(auto i:v)
        for(int j = 0;j<i.second;j++)
            cout<<i.first<<" ";
    cout<<endl;
    return 0;
}