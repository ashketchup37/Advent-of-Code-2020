#include <bits/stdc++.h>

using namespace std;


// Day 1 Part 1

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("inputfile.txt", "r", stdin);
    freopen("outputfile.txt", "w", stdout);
    #endif

    vector < int > v;

    int x;
    int i = 0;

    while(cin >> x)
    {
    	v.push_back(x);
    }
    int size = v.size();
    for (i = 0; i < size - 1; i++)
    {
    	x = 2020 - v[i];
    	for (int j = i + 1; j < size; j++)
    	{
    		if (v[j] == x)
    		{
    			long long ans = v[i] * v[j];
    			cout << ans << endl;
    		}

    	}
    }
}
