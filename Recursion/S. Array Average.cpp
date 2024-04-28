#include <bits/stdc++.h>
using namespace std;
 
#define lets_start    int main()
#define okeyBye       return 0;
#define ll            long long
#define p             printf
#define usi           unsigned int
#define vi            vector<int>
 
void ar_avg(int arr[], int i, int f, double sum)
{
    if(i==f)
        p("%.6lf\n", sum/(f*1.000000));
    else if(i<f)
    {
        sum+=arr[i];
    ar_avg(arr, i+1, f, sum);
    }
 
}
lets_start
{
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; ++i)
        cin >> arr[i];
    ar_avg(arr, 0, n, 0.000000);
 
    okeyBye
}
