/*
    Question Link : https://leetcode.com/problems/count-primes/

    Time Complexity : O(n*log(logn))
*/

#include<bits/stdc++.h>
using namespace std;
vector <bool> sieve(int n){
    vector <bool> isprime(n);
    for(auto i:isprime)
        i = true;
    isprime[0] = isprime[1] = false;
    for(int i=2;i*i<n;i++)
        if(isprime[i])
            for(int j=i*i;j<n;j+=i)
                isprime[j] = false;
    return isprime;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vector <bool> isprime = sieve(n);
    for(int i=0;i<n;i++)
        if(isprime[i])
            cout<<i<<" ";
    cout<<endl;
    return 0;
}