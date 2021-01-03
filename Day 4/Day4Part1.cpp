#include <bits/stdc++.h>

using namespace std;




// Day 4 Part 1


int main()
{
    #ifndef ONLINE_JUDGE
    freopen ("inputfile.txt", "r", stdin);
    freopen ("outputfile.txt", "w", stdout);
    #endif

    string str = "";
    string s;

    int valid = 0;

    while (getline(cin, s))
    {
        if (s.size() != 0)
        {
            str += s;
            str += " ";
        }
        else
        {
            //cout << str << endl;
            stringstream SS(str);
            string strng;

            int byr = 0, iyr = 0, eyr = 0, hgt = 0, hcl = 0, ecl = 0, pid = 0;

            while (SS >> strng)
            {
                if (strng[0] == 'b' and strng[1] == 'y' and strng[2] == 'r')
                    byr = 1;
                else if (strng[0] == 'i' and strng[1] == 'y' and strng[2] == 'r')
                    iyr = 1;
                else if (strng[0] == 'e' and strng[1] == 'y' and strng[2] == 'r')
                    eyr = 1;
                else if (strng[0] == 'h' and strng[1] == 'g' and strng[2] == 't')
                    hgt = 1;
                else if (strng[0] == 'h' and strng[1] == 'c' and strng[2] == 'l')
                    hcl = 1;
                else if (strng[0] == 'e' and strng[1] == 'c' and strng[2] == 'l')
                    ecl = 1;
                else if (strng[0] == 'p' and strng[1] == 'i' and strng[2] == 'd')
                    pid = 1;
            }

            if (byr and iyr and eyr and hgt and hcl and ecl and pid)
                valid++;

            str = "";
        }
    }    

    cout << valid << endl;

}
