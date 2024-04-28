#include <bits/stdc++.h>
using namespace std;
 
#define lets_start    int main()
#define okeyBye       return 0;
#define ll            long long
#define p             printf
#define usi           unsigned int
#define vi            vector<int>
 
int b_c(int n, int i)
{
    vi v;
    if(n==0)
       return 0;
    else
    {
        int k=n%2;
        v.push_back(k);
        b_c(n/2, i+1);
    }
    for(int j=v.size()-1; j>=0; --j)
        cout << v[j];
}
lets_start
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        b_c(n, 0);
        cout << endl;
    }
    okeyBye
}
