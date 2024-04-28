#include <bits/stdc++.h>
using namespace std;
 
#define lets_start    int main()
#define okeyBye       return 0;
#define ll            long long
#define p             printf
#define usi           unsigned int
#define vi            vector<int>
 
int cnt_vwl(string str, int x, int k)
{
    if(str[x]=='a' || str[x]=='e' || str[x]=='i' || str[x]=='o' || str[x]=='u' || str[x]=='A' || str[x]=='E' || str[x]=='I' || str[x]=='O' || str[x]=='U')
    {
        k++;
 
    }
    if(x==0)
    {
        cout << k << endl;
        return 0;
    }
 
    cnt_vwl(str, x-1, k);
}
 
lets_start
{
    string s;
    getline(cin, s);
    int n=s.size();
    cnt_vwl(s, n-1, 0);
    okeyBye
}
