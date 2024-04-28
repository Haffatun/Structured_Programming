#include <bits/stdc++.h>
using namespace std;
 
#define lets_start    int main()
#define okeyBye       return 0;
#define ll            long long
#define p             printf
#define usi           unsigned int
#define vi            vector<int>
 
ll suffix_sum(int arr[], int n, int m, int r, ll sum)
{
    if(r-n==m)
        return sum;
    if(r-n<m)
    {
        sum+=arr[n];
        return suffix_sum(arr, n-1, m, r, sum);
    }
}
 
lets_start
{
    int n, m; cin >> n >> m;
    int arr[n];
    for(int i=0; i<n; ++i)
        cin >> arr[i];
    ll ans=suffix_sum(arr, n-1, m, n-1, 0);
    cout << ans << endl;
    okeyBye
}
