//Given a number N and an array A of N numbers. 
//Determine if it's palindrome or not.
#include <bits/stdc++.h>
using namespace std;

//Check its palindrome or not
bool checkPalindrome(int arr[], int n, int k)
{
    //Base case
    if(k>=n) return 0;

    //Recursive call
    checkPalindrome(arr, n-1, k+1);

    if(arr[n]==arr[k]) return true;
    else return false;

}
int main()
{
    //Take a number
    int n; cin >> n;
    //Take an array
    int arr[n];
    for(int i=0; i<n; ++i)
        cin >> arr[i];
    //Call the function and print palindrome or not
    (checkPalindrome(arr, n-1, 0))? cout << "YES\n": cout << "NO\n";

    return 0;
}

