//Given a number N.
//Print the binary equivalent of N.

#include <bits/stdc++.h>
using namespace std;

//Print function
void PrintinBinary(int n)
{
    //Base case
    if(n==0) return;

    //Recursive call statement
    PrintinBinary(n/2);
    cout << n%2;
}
int main()
{
    //Take an input t for test case
    int t; cin >> t;
    while(t--)
    {
        //Take an input n
        int n; cin >> n;
        //Call the function
        PrintinBinary(n);
        cout << endl;
    }

    return 0;
}

