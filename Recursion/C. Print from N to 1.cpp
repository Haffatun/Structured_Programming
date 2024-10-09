//Given a number N.
//Print all numbers from N to 1 separated by a single space.

#include <bits/stdc++.h>
using namespace std;

//Print function
void PrintNto1(int n)
{
    //Base case
    if(n==0) return;

    if(n==1) cout << n << endl;
    else cout << n << " ";

    //Recursive call statement
    PrintNto1(n-1);
}
int main()
{
    //Take an input n
    int n; cin >> n;
    //Call the function
    PrintNto1(n);

    return 0;
}

