//Given a number N.
//Print the digits of N separated by a space.

#include <bits/stdc++.h>
using namespace std;

//Print function
void PrintNto1(int n)
{
    //Base case
    if(n==0) return;

    //Recursive call statement
    PrintNto1(n/10);
    cout << n%10 << " ";
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
        PrintNto1(n);
        cout << endl;
    }

    return 0;
}

