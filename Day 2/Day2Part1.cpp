#include <bits/stdc++.h>

using namespace std;



// Day 2 Part 1


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

    	int size = pass.size(), count = 0;

    	for (int i = 0; i < size; i++)
    	{
    		if (pass[i] == ch)
    			count++;
    	}

    	if (count <= high && count >= low)
    		valid++;
    }
    cout << valid << endl;
}
