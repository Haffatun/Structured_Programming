#include <bits/stdc++.h>
using namespace std;
 
#define lets_start    int main()
#define okeyBye       return 0;
#define ll            long long
#define p             printf
#define usi           unsigned int
#define vi            vector<int>
 
ll sum_n(int arr[], int s, int n, ll sum)
{
    if(n==s)
    {
        cout << sum << endl;
        return 0;
    }
    sum+=arr[n];
    sum_n(arr, s, n+1, sum);
}
 
lets_start
{
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; ++i)
        cin >> arr[i];
    sum_n(arr, n, 0, 0);
 
    okeyBye
}
