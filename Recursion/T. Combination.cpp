#include <bits/stdc++.h>
using namespace std;
 
#define lets_start    int main()
#define okeyBye       return 0;
#define ll            long long
#define p             printf
#define usi           unsigned int
#define vi            vector<int>
 
ll nCr(int n, int r)
{
    int res;
    if(r==0)
        return 1;
    else if(r>0)
        res = nCr(n, r-1)*(n-r+1)/r;
    return res;
}
lets_start
{
    int n, r; cin >> n >> r;
    cout << nCr(n, r) << endl;
    okeyBye
}
