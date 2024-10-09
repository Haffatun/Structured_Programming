//Given a string S.
//Print number of vowels in the string.

#include <bits/stdc++.h>
using namespace std;

//Count function
int cntVowel(string s, int n, int cnt)
{
    //Base case
    if(n<0) return cnt;

    //Check Vowel
    if(s[n]=='a'||s[n]=='e'||s[n]=='i'||s[n]=='o'||s[n]=='u'||
       s[n]=='A'||s[n]=='E'||s[n]=='I'||s[n]=='O'||s[n]=='U')
        cnt++;

    return cntVowel(s, n-1, cnt);
}
int main()
{
    //Take a String
    string s;
    getline(cin, s);
    //String size
    int sz=s.size();
    //print the function output
    cout << cntVowel(s, sz, 0);

    return 0;
}

