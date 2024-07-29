#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<vector<int>> arr;

	for (int i = 0; i < 100; i++)
	{
		vector<int> temp;
		for (int j = 0; j < 100; j++)
		{
			temp.push_back(0);
		}
		arr.push_back(temp);
	}

	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x = 0, y = 0;
		cin >> x >> y;
		for (int j = y; j < y + 10; j++)
		{
			for (int k = x; k < x + 10; k++)
			{
				arr[j][k] = 1;
			}
		}
	}

	int answer = 0;
	for (auto e : arr)
	{
		for (auto f : e)
		{
			if (f == 1) answer++;
		}
	}

	cout << answer;
}