#include <bits/stdc++.h>
using namespace std;
 
#define lets_start    int main()
#define okeyBye       return 0;
#define ll            long long
#define p             printf
#define usi           unsigned int
#define vi            vector<int>
 
ll factorial(ll x)
{
    if(x>1)
        return x*factorial(x-1);
    return x;
}
 
lets_start
{
    ll n; cin >> n;
    cout << factorial(n) << endl;
    okeyBye
}
