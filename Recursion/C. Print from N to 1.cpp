#include <bits/stdc++.h>
using namespace std;
 
#define lets_start    int main()
#define okeyBye       return 0;
#define ll            long long
#define p             printf
#define usi           unsigned int
#define vi            vector<int>
 
void n_to_one(int k)
{
    if(k==0)
        return;
    if(k==1)
        cout << k;
    else
    {
        cout << k << " ";
        n_to_one(k-1);
    }
}
lets_start
{
    int n;
    cin >> n;
    n_to_one(n);
    okeyBye
}
