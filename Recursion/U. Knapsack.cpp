//Given a number N and an array A of N numbers.
//Calculate the average of these numbers.

#include <bits/stdc++.h>
using namespace std;

//Maximum value of capacity w
int knapsack(int wt[], int val[], int n, int w)
{
    //Base case
    if(n<=0 || w<=0) return 0;

    if(wt[n-1]>w) return knapsack(wt, val, n-1, w);
    else
        return max(knapsack(wt, val, n-1, w), val[n-1]+knapsack(wt, val, n-1, w-wt[n-1]));
}
int main()
{
    int n, w; cin >> n >> w;
    int arw[n], arv[n];
    for(int i=0; i<n; ++i)
    {
        cin >> arw[i];
        cin >> arv[i];
    }

    //Call the function and print the return value
    cout << knapsack(arw, arv, n, w) << endl;

    return 0;
}

