//Given a number N.
//Print the value of the Nth Fibonacci number.

#include <bits/stdc++.h>
using namespace std;

//Fibonacci function
int Fib(int n)
{
    //Base case
    if(n==1) return 0;
    if(n==2) return 1;

    //Recursive call
    return Fib(n-1)+Fib(n-2);
}
int main()
{
    //Take a number
    int n; cin >> n;

    //Call the function and print the return value
    cout << Fib(n) << endl;

    return 0;
}

