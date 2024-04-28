#include <bits/stdc++.h>
using namespace std;
 
#define lets_start    int main()
#define okeyBye       return 0;
#define ll            long long
#define p             printf
#define usi           unsigned int
#define vi            vector<int>
 
const int mx=100;
int sum_mat(int mat1[][mx], int mat2[][mx], int r, int c, int m, int n)
{
    if(m<r)
    {
        if(n<c-1)
        {
 
            cout << mat1[m][n]+mat2[m][n] << " ";
            sum_mat(mat1, mat2, r, c, m, n+1);
        }
        else
        {
            cout << mat1[m][n]+mat2[m][n] << endl;
            n=0;
            sum_mat(mat1, mat2, r, c, m+1, n);
        }
 
    }
    else
        return 0;
}
 
lets_start
{
    int r, c; cin >> r >> c;
    int mat1[r][mx], mat2[r][mx];
    for(int i=0; i<r; ++i)
    {
        for(int j=0; j<c; ++j)
            cin >> mat1[i][j];
    }
    for(int i=0; i<r; ++i)
    {
        for(int j=0; j<c; ++j)
            cin >> mat2[i][j];
    }
    sum_mat(mat1, mat2, r, c, 0, 0);
 
    okeyBye
}
