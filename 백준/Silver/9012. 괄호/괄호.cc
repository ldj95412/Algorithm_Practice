#include "bits/stdc++.h"
using namespace std;

int cnt;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;

	while (n--)
	{
		stack<char> ST;
		string STR;
		cin >> STR;

		for (int i = 0; i < STR.length(); i++)
		{
			if (STR[i] == '(')
			{
				ST.push('(');
			}
			else
			{
				if (ST.empty())
				{
					ST.push(')');
					break;
				}
				if (ST.top() == '(') ST.pop();
			}
		}
		
		if (ST.empty())
		{
			cout << "YES" << "\n";
		}
		else
		{
			cout << "NO" << "\n";
		}
	}
}