#include <bits/stdc++.h>
using namespace std;
 
#define lets_start    int main()
#define okeyBye       return 0;
#define ll            long long
#define p             printf
#define usi           unsigned int
#define vi            vector<int>
 
int max_n(int arr[], int s, int mx)
{
    if(arr[s] > mx)
        mx=arr[s];
    if(s==0)
    {
        cout << mx << endl;
        return 0;
    }
    max_n(arr, s-1, mx);
}
 
lets_start
{
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; ++i)
        cin >> arr[i];
    int mx=arr[n-1];
    max_n(arr, n-1, mx);
 
    okeyBye
}
