//Given a number N.
//Print factorial of N.

#include <bits/stdc++.h>
using namespace std;

//Find factorial
long long factorial(int n)
{
    //Base case
    if(n==0 || n==1) return 1;

    return n*factorial(n-1);
}
int main()
{
    //Take an integer
    int n; cin >> n;

    //print the factorial of n
    cout << factorial(n);

    return 0;
}

