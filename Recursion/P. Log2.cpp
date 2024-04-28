#include <bits/stdc++.h>
using namespace std;
 
#define lets_start    int main()
#define okeyBye       return 0;
#define ll            long long
#define p             printf
#define usi           unsigned int
#define vi            vector<int>
int lg(ll n)
{
    if(n==1) okeyBye
    int k =1;
    k+=lg(n/2);
    return k;
}
 
lets_start
{
    ll n; cin >> n;
    cout << lg(n) << endl;
 
    okeyBye
}
