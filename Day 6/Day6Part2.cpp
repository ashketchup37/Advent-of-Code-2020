#include <bits/stdc++.h>

using namespace std;

// Day 6 Part 2


int main()
{
    #ifndef ONLINE_JUDGE
    freopen ("inputfile.txt", "r", stdin);
    freopen ("outputfile.txt", "w", stdout);
    #endif

    string str = "";
    string s;

    int total_count = 0;
    int members = 0;


    // Was forced to change the input data to get it to work
    // Had to add two blank space at the end of the file to count the last group
    while (getline(cin, s))
    {
        if (s.size() != 0)
        {
            str += s;
            members++;
        }
        else
        {
            
            string unique = "";
            sort(str.begin(), str.end());

            

            int current_count = 1;
            char current_char = str[0];
            
            for (int i = 1, l = str.size(); i < l; i++)
            {
                if (current_count == members)
                {
                    unique += current_char;
                }
                if (str[i] == current_char)
                {
                    current_count++;
                }
                else
                {
                    current_char = str[i];
                    current_count = 1;
                }

            }


            if (current_count == members)
            {
                unique += current_char;
            }

            total_count += unique.size();
            str = "";
            members = 0;
        }
    }

    cout << total_count << endl;
}
