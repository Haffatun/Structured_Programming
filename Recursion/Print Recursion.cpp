#include <bits/stdc++.h>
using namespace std;
 
#define lets_start    int main()
#define okeyBye       return 0;
#define ll            long long
#define p             printf
#define usi           unsigned int
#define vi            vector<int>
 
void print(int x)
{
    if(x==0)
        return;
    print(x-1);
    cout << "I love Recursion\n";
}
 
lets_start
{
    int n;
    cin >> n;
    print(n);
    okeyBye
}
