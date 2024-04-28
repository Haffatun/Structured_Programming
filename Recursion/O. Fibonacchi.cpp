#include <bits/stdc++.h>
using namespace std;
 
#define lets_start    int main()
#define okeyBye       return 0;
#define ll            long long
#define p             printf
#define usi           unsigned int
#define vi            vector<int>
 
int fib(int n)
{
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}
 
lets_start
{
    int n; cin >> n;
    cout << fib(n) << endl;
 
    okeyBye
}
