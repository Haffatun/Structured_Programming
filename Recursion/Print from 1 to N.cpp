#include <bits/stdc++.h>
using namespace std;
 
#define lets_start    int main()
#define okeyBye       return 0;
#define ll            long long
#define p             printf
#define usi           unsigned int
#define vi            vector<int>
 
void one_to_n(int k)
{
    if(k==0)
        return;
    one_to_n(k-1);
    cout << k << endl;
}
lets_start
{
    int n;
    cin >> n;
    one_to_n(n);
    okeyBye
}
