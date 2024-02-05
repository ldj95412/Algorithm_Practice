#include "bits/stdc++.h"
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	deque<int> MyDeq;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string MyStr;
		cin >> MyStr;

		if (MyStr == "push_front")
		{
			int MyInt;
			cin >> MyInt;
			MyDeq.push_front(MyInt);
		}
		else if (MyStr == "push_back")
		{
			int MyInt;
			cin >> MyInt;
			MyDeq.push_back(MyInt);
		}
		else if (MyStr == "pop_front")
		{
			if (MyDeq.empty())
			{
				cout << -1 << "\n";
				continue;
			}
			cout << MyDeq.front() << "\n";
			MyDeq.pop_front();
		}
		else if (MyStr == "pop_back")
		{
			if (MyDeq.empty())
			{
				cout << -1 << "\n";
				continue;
			}
			cout << MyDeq.back() << "\n";
			MyDeq.pop_back();
		}
		else if (MyStr == "size")
		{
			cout << MyDeq.size() << "\n";
		}
		else if (MyStr == "empty")
		{
			cout << MyDeq.empty() << "\n";
		}
		else if (MyStr == "front")
		{
			if (MyDeq.empty())
			{
				cout << -1 << "\n";
				continue;
			}
			cout << MyDeq.front() << "\n";
		}
		else if (MyStr == "back")
		{
			if (MyDeq.empty())
			{
				cout << -1 << "\n";
				continue;
			}
			cout << MyDeq.back() << "\n";
		}
	}
}