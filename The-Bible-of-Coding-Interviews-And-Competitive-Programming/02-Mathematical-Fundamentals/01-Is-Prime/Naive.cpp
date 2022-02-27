/* Problem Link : https://practice.geeksforgeeks.org/problems/prime-number2314/1 */
#include<bits/stdc++.h>
using namespace std;
bool is_prime(int n){
    if(n < 2)
        return false;
    if(n == 2)
        return true;
    if(!(n%2))
        return false;
    for(int i=3;i<=n;i+=2)
        if(!(n%i))
            return false;
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    if(is_prime(n))
        cout<<n<<" is a prime number\n";
    else
        cout<<n<<" is not a prime number\n";
}