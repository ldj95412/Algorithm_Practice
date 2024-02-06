#include "bits/stdc++.h"
using namespace std;

int cnt;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string STR;
		stack<char> ST;

		cin >> STR;

		for (auto e : STR)
		{
			if (ST.empty()) ST.push(e);
			else
			{
				if (ST.top() == e)
				{
					ST.pop();
				}
				else
				{
					ST.push(e);
				}
			}
		}

		if (ST.empty()) cnt++;
	}
	cout << cnt;
}