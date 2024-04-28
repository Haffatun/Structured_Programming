#include <bits/stdc++.h>
using namespace std;
 
#define lets_start    int main()
#define okeyBye       return 0;
#define ll            long long
#define p             printf
#define usi           unsigned int
#define vi            vector<int>
 
int spaceOdd(int arr[], int x)
{
    if(x==0)
    {
        cout << arr[x];
        return 0;
    }
    if(x%2==0)
        cout << arr[x] << " ";
    spaceOdd(arr, x-1);
}
 
lets_start
{
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; ++i)
        cin >> arr[i];
    spaceOdd(arr, n-1);
    okeyBye
}
