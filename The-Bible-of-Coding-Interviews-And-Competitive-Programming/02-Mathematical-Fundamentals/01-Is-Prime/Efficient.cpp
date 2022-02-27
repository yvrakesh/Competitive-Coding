/* Problem Link : https://practice.geeksforgeeks.org/problems/prime-number2314/1 */
#include<bits/stdc++.h>
using namespace std;
/* Suppose n is not a prime number 
    Then there exists a,b such that b is in the range of [2,n-1]
    n = a * b
    Let a <= b
        a * a <= a * b
        a ^ 2 <= n
        a <= sqrt(n)
    
    So n is not a prime number only if it has a factor less than or equal to square root of n
*/
bool is_prime(int n){
    if(n < 2)
        return false;
    if(n == 2)
        return true;
    if(!(n%2))
        return false;
    for(int i=3;i<=sqrt(n);i+=2)
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