#include <bits/stdc++.h>

using namespace std;


// Day 2 Part 2

int main()
{
	#ifndef ONLINE_JUDGE
    freopen("inputfile.txt", "r", stdin);
    freopen("outputfile.txt", "w", stdout);
    #endif

    string str;

    int valid = 0;

    while (getline(cin, str))
    {
    	stringstream ss(str);

    	int low, high;

    	char ch, colon;

    	string pass;

    	ss >> low >> high >> ch >> colon >> pass;


    	high *= -1;


    	if ((pass[low - 1] == ch or pass[high - 1] == ch) and (pass[low - 1] != pass[high - 1]))
    		valid++;
    }
    cout << valid << endl;
}
