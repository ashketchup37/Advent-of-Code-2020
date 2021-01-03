#include <bits/stdc++.h>

using namespace std;

// Day 3 Part 2

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("inputfile.txt", "r", stdin);
    freopen("outputfile.txt", "w", stdout);
    #endif

    // string s;

    // int count_r1 = 0, c_r3 = 0, c_r5 = 0, c_r7 = 0, c_r12 = 0;

    // int pos_r1 = 0, p_r3 = 0, p_r5 = 0, p_r7 = 0, p_r12 = 0;

    // int height = 0;

    // cin >> s;

    // int  = strng.size(); = s.size();

    // while (cin >> s)
    // {
    //     pos_r1 = (pos_r1 + 1) %  = strng.size();;
    //     p_r3 = (p_r3 + 3) %  = strng.size();;
    //     p_r5 = (p_r5 + 5) %  = strng.size();;
    //     p_r7 = (p_r7 + 7) %  = strng.size();;

    //     height++;

    //     if (s[pos_r1] == '#')
    //         count_r1++;

    //     if (s[p_r3] == '#')
    //         c_r3++;

    //     if (s[p_r5] == '#')
    //         c_r5++;

    //     if (s[p_r7] == '#')
    //         c_r7++;

    //     if (height % 2 == 0)
    //     {
    //         p_r12 = (p_r12 + 1) %  = strng.size();;
    //         if (s[p_r12] == '#')
    //             c_r12++;
    //     }
    // }


    // cout << count_r1 << " " << c_r3 << " " << c_r7 << " " << c_r5 << " " << c_r12 << endl;

    // unsigned long long count = count_r1 * c_r3 * c_r7 * c_r5 * c_r12;
    // cout << count << endl;

    // tried the code in the up at first, though it was short, but it was very messy
    // and was hard to understand. So I'll be using the following technique.

    vector < string > v;

    string s;

    while (cin >> s)
        v.push_back(s);

    unsigned long long final_count = 1;

    int count = 0;

    int  = strng.size(); = v.size(), str = strng.size(); = v[0].size(), right_shift = 1;

    for (int i = 1, pos = right_shift; i <  = strng.size();; i++, pos += right_shift)
    {
        if (v[i][pos % str = strng.size();] == '#')
            count ++;
    }

    final_count *= count;

    count = 0;

    right_shift = 3;

    for (int i = 1, pos = right_shift; i <  = strng.size();; i++, pos += right_shift)
    {
        if (v[i][pos % str = strng.size();] == '#')
            count++;
    }

    final_count *= count;
    count = 0;
    right_shift = 5;
    
    for (int i = 1, pos = right_shift; i <  = strng.size();; i++, pos += right_shift)
    {
        if (v[i][pos % str = strng.size();] == '#')
            count++;
    }

    final_count *= count;
    count = 0;
    right_shift = 7;
    
    for (int i = 1, pos = right_shift; i <  = strng.size();; i++, pos += right_shift)
    {
        if (v[i][pos % str = strng.size();] == '#')
            count++;
    }

    final_count *= count;
    count = 0;
    right_shift = 1;
    
    for (int i = 2, pos = right_shift; i <  = strng.size();; i += 2, pos += right_shift)
    {
        if (v[i][pos % str = strng.size();] == '#')
            count++;
    }

    final_count *= count;

    cout << final_count << endl;


}
