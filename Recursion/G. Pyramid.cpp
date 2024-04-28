#include <bits/stdc++.h>
using namespace std;
 
#define lets_start    int main()
#define okeyBye       return 0;
#define ll            long long
#define p             printf
#define usi           unsigned int
#define vi            vector<int>
 
ll pyramid(int d, int r, int k)
{
    if(d<=k)
    {
        int a=r, b=2*d-1;
        while(a--)
            cout << " ";
        while(b--)
            cout << "*";
        cout << endl;
        pyramid(d+1, r-1, k);
    }
}
 
lets_start
{
    int n; cin >> n;
    pyramid(1, n-1, n);
 
    okeyBye
}
