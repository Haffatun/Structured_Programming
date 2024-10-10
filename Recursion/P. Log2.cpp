//Given a number N.
//Print log2(N).

#include <bits/stdc++.h>
using namespace std;

//2 based Logarithmic function
long long log2(long long n, long long k)
{
    //Base case
    if(n==1) return 0;

    //Recursive call
    return k+log2(n/2, k);
}
int main()
{
    //Take a number
    long long n; cin >> n;

    //Call the function and print the return value
    cout << log2(n, 1) << endl;

    return 0;
}

