//Given a number N and an array A of N numbers.
//Print the maximum value in this array.

#include <bits/stdc++.h>
using namespace std;

//Find Maximum value from array
int FindMax(int arr[], int n, int mx)
{
    //Base case
    if(n<0) return mx;

    mx=max(arr[n], mx);
    return FindMax(arr, n-1, mx);
}
int main()
{
    //Take an integer
    int n; cin >> n;
    //Take an array
    int arr[n];
    for(int i=0; i<n; ++i)
        cin >> arr[i];
    //Call the function and print the max value of the array
    cout << FindMax(arr, n-2, arr[n-1]);

    return 0;
}

