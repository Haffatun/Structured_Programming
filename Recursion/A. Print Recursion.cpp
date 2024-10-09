//Given a number N. Print "I love Recursion" N times.

#include <bits/stdc++.h>
using namespace std;

//Print function
void PrintRecursion(int n)
{
    //Base case
    if(n==0) return;
    //Recursive call statement
    PrintRecursion(n-1);
    cout << "I love Recursion\n";
}
int main()
{
    //Take a input n
    int n; cin >> n;
    //Call the function
    PrintRecursion(n);

    return 0;
}

