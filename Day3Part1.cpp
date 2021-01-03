#include <bits/stdc++.h>

using namespace std;


// Day 3 Part 1

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("inputfile.txt", "r", stdin);
    freopen("outputfile.txt", "w", stdout);
    #endif

    // First I wanted to store the whole thing in a vector
    // Then realised I'll not be using it more than once. 
    // So opted for this solution.

    string s;

    int count = 0;
    int pos = 0;

    cin >> s;
    int  = strng.size(); = s.size();

    while(cin >> s)
    {
        pos = (pos + 3) %  = strng.size();;

        if (s[pos] == '#')
            count++;
    }
    cout << count << endl;
}
