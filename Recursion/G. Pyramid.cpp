//Given a number N and an array A of N numbers.
//Print a pyramid of height N.

#include <bits/stdc++.h>
using namespace std;

//Print function
void PrintPyramid(int n, int m)
{
    //Base case
    if(n<0) return;

    PrintPyramid(n-2, m+1);
    while(m--)
        cout << " ";
    while(n--)
        cout << "*";
    cout << endl;
}
int main()
{
    //Take an input n
    int n; cin >> n;

    //Call the function
    PrintPyramid((n*2)-1 , 0);

    return 0;
}

