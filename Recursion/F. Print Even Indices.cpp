//Given a number N and an array A of N numbers.
//Print the numbers in even indices in a reversed order.

#include <bits/stdc++.h>
using namespace std;

//Print function
void PrintEvenIndex(int arr[], int n)
{
    //Base case
    if(n<0) return;

    if(n%2==1) return PrintEvenIndex(arr, n-1);

    cout << arr[n] << " ";
    return PrintEvenIndex(arr, n-2);

}
int main()
{
    //Take an input n
    int n; cin >> n;
    //Take n number of array input
    int arr[n];
    for(int i=0; i<n; ++i)
        cin >> arr[i];

    //Call the function
    PrintEvenIndex(arr, n-1);

    return 0;
}

