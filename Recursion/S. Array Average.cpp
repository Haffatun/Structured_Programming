//Given a number N and an array A of N numbers.
//Calculate the average of these numbers.

#include <bits/stdc++.h>
using namespace std;

//Finding Array average
double averageN(int arr[], int n, int sum, int k)
{
    //Base case
    if(n<0) return sum/k;

    //Recursive call
    return averageN(arr, n-1, sum+arr[n], k);
}
int main()
{
    //Take a number
    int n; cin >> n;
    //Take an array
    int arr[n];
    for(int i=0; i<n; ++i)
        cin >> arr[i];
    //Call the function and print the return value
    cout << setprecision(6) << fixed << averageN(arr, n-1, 0, n) << endl;

    return 0;
}

