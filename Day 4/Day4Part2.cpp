#include <bits/stdc++.h>

using namespace std;


// Day 4 Part 2

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
                {
                    int len = strng.size();

                    int year = 0;

                    for(int i = 1, j = 1; i <= 4; i++, j *= 10)
                    {
                        year += ((strng[len - i] - '0') * j);
                    }

                    if (year <= 2002 and year >= 1920)
                    {
                        byr = 1;
                    }
                }
                else if (strng[0] == 'i' and strng[1] == 'y' and strng[2] == 'r')
                {
                    int len = strng.size();

                    int year = 0;

                    for(int i = 1, j = 1; i <= 4; i++, j *= 10)
                    {
                        year += ((strng[len - i] - '0') * j);
                    }
                    
                    if (year <= 2020 and year >= 2010)
                    {
                        iyr = 1;
                    }
                }
                else if (strng[0] == 'e' and strng[1] == 'y' and strng[2] == 'r')
                {
                    int len = strng.size();

                    int year = 0;

                    for(int i = 1, j = 1; i <= 4; i++, j *= 10)
                    {
                        year += ((strng[len - i] - '0') * j);
                    }
                    
                    if (year <= 2030 and year >= 2020)
                    {
                        eyr = 1;
                    }
                }
                else if (strng[0] == 'h' and strng[1] == 'g' and strng[2] == 't')
                {
                    int len = strng.size();

                    int height = 0;

                    for (int i = 1, j = 1; i <= 3; i++, j *= 10)
                    {
                        char c = strng[len - i - 2];
                        if (c >= '0' and c <= '9')
                        {
                            height += ((c - '0') * j);
                        }
                    }


                    if (strng[strng.size() - 1] == 'm')
                    {
                        if (height >= 150 and height <= 193)
                            hgt = 1;
                    }
                    else if (strng[strng.size() - 1] == 'n')
                    {
                        if (height >= 59 and height <= 76)
                            hgt = 1;
                    }
                }
                else if (strng[0] == 'h' and strng[1] == 'c' and strng[2] == 'l')
                {
                    if (strng[4] == '#')
                    {
                        int len = strng.size();
                        if (len - 4 == 7)
                        {
                            for (int i = 1; i <= 6; i++)
                            {
                                if ((strng[len - i] >= '0' and strng[len - i] <= '9')  or (strng[len - i] >= 'a' and strng[len - i] <= 'f'))
                                    hcl = 1;
                                else
                                {
                                    hcl = 0;
                                    break;
                                }
                            }
                        }
                    }
                }
                else if (strng[0] == 'e' and strng[1] == 'c' and strng[2] == 'l')
                {
                    if (strng[4] == 'a' and strng[5] == 'm' and strng[6] == 'b')
                        ecl = 1;
                    if (strng[4] == 'g' and strng[5] == 'r' and strng[6] == 'n')
                        ecl = 1;
                    if (strng[4] == 'g' and strng[5] == 'r' and strng[6] == 'y')
                        ecl = 1;
                    if (strng[4] == 'b' and strng[5] == 'l' and strng[6] == 'u')
                        ecl = 1;
                    if (strng[4] == 'b' and strng[5] == 'r' and strng[6] == 'n')
                        ecl = 1;
                    if (strng[4] == 'h' and strng[5] == 'z' and strng[6] == 'l')
                        ecl = 1;
                    if (strng[4] == 'o' and strng[5] == 't' and strng[6] == 'h')
                        ecl = 1;
                    
                }
                else if (strng[0] == 'p' and strng[1] == 'i' and strng[2] == 'd')
                {
                    int len = strng.size();
                    if (len == 13)
                    {
                        for (int i = 1; i <= 9; i++)
                        {
                            if (strng[len - i] <= '9' and strng[len - i] >= '0')
                            {
                                pid = 1;
                            }
                            else
                            {
                                pid = 0;
                                break;
                            }
                        }
                    }
                }
            }

            if (byr and iyr and eyr and hgt and hcl and ecl and pid)
            {
                // cout << str << endl;
                valid++;
            }

            str = "";
        }
    }    

    cout << valid << endl;

}
