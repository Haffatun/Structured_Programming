//Given a number N.
//Print numbers from 1 to N in separate lines.

#include <bits/stdc++.h>
using namespace std;

//Print function
void Print1toN(int n)
{
    //Base case
    if(n==0) return;
    //Recursive call statement
    Print1toN(n-1);
    cout << n << endl;
}
int main()
{
    //Take an input n
    int n; cin >> n;
    //Call the function
    Print1toN(n);

    return 0;
}

