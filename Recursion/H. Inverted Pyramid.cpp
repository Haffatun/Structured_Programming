//Given a number N and an array A of N numbers.
//Print an inverted pyramid of height N.

#include <bits/stdc++.h>
using namespace std;

//Print function
void PrintInvertedPyramid(int n, int m)
{
    //Base case
    if(n<0) return;
 
    int a=m, b=n;
    while(a--)
        cout << " ";
    while(b--)
        cout << "*";
    cout << endl;

    PrintInvertedPyramid(n-2, m+1);
}
int main()
{
    //Take an input n
    int n; cin >> n;

    //Call the function
    PrintInvertedPyramid((n*2)-1 , 0);

    return 0;
}

