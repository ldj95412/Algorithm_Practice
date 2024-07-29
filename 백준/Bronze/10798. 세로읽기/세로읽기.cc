#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> arr;
	int max_col = 0;
	for (int i = 0; i < 5; i++)
	{
		string str;
		cin >> str;
		arr.push_back(str);
		if (max_col < str.size()) max_col = str.size();
	}

	for (int i = 0; i < max_col; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[j].size() - 1 < i) continue;
			cout << arr[j][i];
		}
	}
}