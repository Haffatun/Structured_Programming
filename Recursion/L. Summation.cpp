//Given a number N and an array A of N numbers.
//Print the summation of the array elements.

#include <bits/stdc++.h>
using namespace std;

int SumofArray(int arr[], int n)
{
    //Base case
    if(n<0) return 0;

    return arr[n]+SumofArray(arr, n-1);
}
int main()
{
    //Take an integer
    int n; cin >> n;
    //Take an array
    int arr[n];
    for(int i=0; i<n; ++i)
        cin >> arr[i];
    //Call the function and print the summation of the array elements
    cout << SumofArray(arr, n-1);

    return 0;
}
