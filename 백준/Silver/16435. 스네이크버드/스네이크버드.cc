#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n, h;
	cin >> n >> h;
	vector<int> arr;

	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}

	sort(arr.begin(), arr.end());

	for (const auto& e : arr)
	{
		if (e <= h)
		{
			h++;
		}
		else
		{
			break;
		}
	}

	cout << h;
}