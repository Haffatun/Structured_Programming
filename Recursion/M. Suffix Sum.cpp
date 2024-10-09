//Given two numbers N and M, and an array A of N numbers.
//Calculate the sum of the last M numbers.

#include <bits/stdc++.h>
using namespace std;

int Sum(int arr[], int n, int m)
{
    //Base case
    if(m==0) return 0;

    return arr[n]+Sum(arr, n-1, m-1);
}
int main()
{
    //Take two numbers
    int n, m; cin >> n >> m;
    //Take an array
    int arr[n];
    for(int i=0; i<n; ++i)
        cin >> arr[i];
    //Call the function and print the sum of the last M numbers
    cout << Sum(arr, n-1, m) << endl;

    return 0;
}

