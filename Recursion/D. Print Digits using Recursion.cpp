#include <bits/stdc++.h>
using namespace std;
 
#define lets_start    int main()
#define okeyBye       return 0;
#define ll            long long
#define p             printf
#define usi           unsigned int
#define vi            vector<int>
 
ll digit_p(int d, int k)
{
    if(k==0)
    {
        cout << "0\n";
    }
    else if(d>0)
    {
        digit_p(d/10, k);
        if(d==k)
            cout << d%10 << endl;
        else
            cout << d%10 << " ";
    }
 
}
 
lets_start
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        digit_p(n, n);
    }
 
    okeyBye
}
