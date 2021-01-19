#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
    freopen("inputfile.txt", "r", stdin);
    freopen("outputfile.txt", "w", stdout);
    #endif


	string command;
	long long value;

	vector< pair <string, long long > > v;

	string input;

	while (getline(cin, input))
	{
		stringstream ss (input);

		ss >> command >> value;

		v.push_back(make_pair(command, value));
	}

	long long acc = 0;

	int i = 0;
	int j = 0;

	while (1)
	{
		if (v[i].first == "Muha")
		{
			cout << acc << endl;
			break;
		}

		if (v[i].first == "acc")
		{
			acc += v[i].second;
			v[i].first = "Muha";
		}
		if (v[i].first == "jmp")
		{
			v[i].first = "Muha";
			i += v[i].second;
			continue;
		}
		if (v[i].first == "nop")
		{
			v[i].first = "Muha";
		}
		i++;
	}
}
