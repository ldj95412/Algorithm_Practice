#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<vector<int>> arr;
	int MaxValue = -1;
	int row = 0;
	int col = 0;

	for (int i = 0; i < 9; i++)
	{
		vector<int> temp;
		for (int j = 0; j < 9; j++)
		{
			int value;
			cin >> value;
			temp.push_back(value);
		}
		arr.push_back(temp);
	}

	for (int i = 0; i < arr.size(); i++)
	{
		for (int j = 0; j < arr[i].size(); j++)
		{
			if (MaxValue < arr[i][j])
			{
				MaxValue = arr[i][j];
				row = i+1;
				col = j+1;
			}
		}
	}

	cout << MaxValue << "\n";
	cout << row << " " << col;
}