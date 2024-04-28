#include <bits/stdc++.h>
using namespace std;
 
#define lets_start    int main()
#define okeyBye       return 0;
#define ll            long long
#define p             printf
#define usi           unsigned int
#define vi            vector<int>
 
ll i_pyramid(int d, int r)
{
    if(d>0)
    {
        int a=2*d-1, b=r;
        while(b--)
            cout << " ";
        while(a--)
            cout << "*";
        cout << endl;
        i_pyramid(d-1, r+1);
    }
}
 
lets_start
{
    int n; cin >> n;
    i_pyramid(n, 0);
 
    okeyBye
}
