#include <bits/stdc++.h>

using namespace std;


// Day 6 Part 1


int main()
{
    #ifndef ONLINE_JUDGE
    freopen ("inputfile.txt", "r", stdin);
    freopen ("outputfile.txt", "w", stdout);
    #endif

    string str = "";
    string s;

    int total = 0;

    // Was forced to change the input data to get it to work
    // Had to add two blank space at the end of the file to count the last group
    while (getline(cin, s))
    {
        if (s.size() != 0)
        {
            str += s;
        }
        else
        {
            string unique = "";
            sort(str.begin(), str.end());

            unique += str[0];
            
            for (int i = 1, l = str.size(); i < l; i++)
                if (str[i] != str[i - 1])
                    unique += str[i];

            total += unique.size();
            str = "";
        }
    }

    cout << total << endl;
}
