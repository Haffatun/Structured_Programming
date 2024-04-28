#include <bits/stdc++.h>
using namespace std;
 
#define lets_start    int main()
#define okeyBye       return 0;
#define ll            long long
#define p             printf
#define usi           unsigned int
#define vi            vector<int>
 
ll pr(int n, ll x)
{
    if(n==1)
        return x+1;
    else if(n%2==1)
    {
        return (pr(3*n+1, x+1));
    }
    else if(n%2==0)
    {
        return (pr(n/2, x+1));
    }
}
 
lets_start
{
    int n; cin >> n;
    ll ans=pr(n, 0);
    cout << ans << endl;
    okeyBye
}
