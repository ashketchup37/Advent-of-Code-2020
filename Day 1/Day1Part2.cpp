#include <bits/stdc++.h>

using namespace std;

// Day 1 Part 2



int main()
{
	#ifndef ONLINE_JUDGE
    freopen("inputfile.txt", "r", stdin);
    freopen("outputfile.txt", "w", stdout);
    #endif

    vector < int > v;
    int x, size;

    while (cin >> x)
    {
    	v.push_back(x);
    }

    size = v.size();

    int sum = 0;

    for (int i = 0; i + 2 < size; i++)
    {
    	sum += v[i];
    	for (int j = i + 1; j + 1 < size; j++)
    	{
    		sum += v[j];
    		for (int k = j + 1; k < size; k++)
    		{
    			sum += v[k];
    			if (sum == 2020)
    			{
    				cout << v[j] * v[k] * v[i];
    			}
    			sum -= v[k];
    		}
    		sum -= v[j];
    	}
    	sum -= v[i];
    }
}
