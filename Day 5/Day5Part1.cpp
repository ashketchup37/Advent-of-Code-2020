#include <bits/stdc++.h>

using namespace std;


// Day 5 Part 1


int main()
{
    #ifndef ONLINE_JUDGE
    freopen ("inputfile.txt", "r", stdin);
    freopen ("outputfile.txt", "w", stdout);
    #endif   

    string s;
    vector < long long > v;

    

    int row = -24, column = -23;

    while (cin >> s)
    {
        int front = 0, back = 127, left = 0, right = 7;
        for (int i = 0; i < 7; i++)
        {
            if (s[i] == 'F')
            {
                back = round((back + front) / 2.0) - 1;
            }
            else
                front = round((back + front) / 2.0);


            if (front == back)
            {
                row = front;
            }
        }


        for (int i = 7; i < 10; i++)
        {
            if (s[i] == 'R')
            {
                left = round((left + right) / 2.0);
            }
            else
            {
                right = round((left + right) / 2.0) - 1;
            }

            if (right == left)
            {
                column = right;
            }
        }

        v.push_back(row * 8 + column);



    }

    int highest = -1; 

    for (int i = 0, l = v.size(); i < l; i++)
        if (v[i] > highest)
            highest = v[i];

    cout << highest << endl;
}

