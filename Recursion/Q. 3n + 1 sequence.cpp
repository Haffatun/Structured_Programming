//Given a number n, you should print the length of the 3n+1 sequence starting with n.

#include <bits/stdc++.h>
using namespace std;

//Function for 3n+1 sequence
long long F(long long n, long long k)
{
    //Base case
    if(n==1) return k;

    //Recursive call
    if(n%2==0) F(n/2, k+1);
    else F((n*3)+1, k+1);
}
int main()
{
    //Take a number
    long long n; cin >> n;

    //Call the function and print the return value
    cout << F(n, 1) << endl;

    return 0;
}

