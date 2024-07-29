#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int col, rows;
	vector<vector<int>> arr1;
	vector<vector<int>> arr2;
	vector<vector<int>> result;

	cin >> rows >> col;

	for (int i = 0; i < rows; i++)
	{
		vector<int> temp;
		for (int j = 0; j < col; j++)
		{
			int value;
			cin >> value;
			temp.push_back(value);
		}
		arr1.push_back(temp);
	}

	for (int i = 0; i < rows; i++)
	{
		vector<int> temp;
		for (int j = 0; j < col; j++)
		{
			int value;
			cin >> value;
			temp.push_back(value);
		}
		arr2.push_back(temp);
	}

	for (int i = 0; i < rows; i++)
	{
		vector<int> temp;
		for (int j = 0; j < col; j++)
		{
			temp.push_back(arr1[i][j] + arr2[i][j]);
		}
		result.push_back(temp);
	}

	for (auto e : result)
	{
		for (auto f : e) cout << f << " ";
		cout << "\n";
	}
}