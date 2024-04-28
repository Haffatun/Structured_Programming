#include <bits/stdc++.h>
using namespace std;
 
#define lets_start    int main()
#define okeyBye       return 0;
#define ll            long long
#define p             printf
#define usi           unsigned int
#define vi            vector<int>
 
int is_pa(int arr1[], int arr2[], int i, int n, int k)
{
    if(n==k)
        return i;
    else if(n<k)
    {
        if(arr1[n]==arr2[n])
            i++;
        is_pa(arr1, arr2, i, n+1, k);
    }
}
lets_start
{
    int n; cin >> n;
    int arr1[n], arr2[n];
    for(int i=0; i<n; ++i)
    {
        cin >> arr1[i];
        arr2[i]=arr1[i];
    }
 
    reverse(arr2, arr2+n);
    int k= is_pa(arr1, arr2, 0, 0, n);
    (k==n)? cout << "YES\n": cout << "NO\n";
    okeyBye
}
