#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) 
{
    vector<vector<int>> answer;
    vector<vector<int>> result;
    
	for (int i = 0; i < n + 2; i++)
	{
		vector<int> temp(n + 2, -1);
		answer.push_back(temp);
	}

	for (int i = 1; i < n + 1; i++)
	{
		for (int j = 1; j < n + 1; j++) answer[i][j] = 0;
	}

	char dir = 'r';
	int row = 1;
	int col = 1;
	int cnt = 0;
	while (cnt < n*n)
	{
		cnt++;

		if (dir == 'r')
		{
			answer[row][col] = cnt;
			col++;
			if (answer[row][col + 1] != 0)
			{
				dir = 'd';
				continue;
			}
		}
		else if (dir == 'd')
		{
			answer[row][col] = cnt;
			row++;
			if (answer[row + 1][col] != 0)
			{
				dir = 'l';
				continue;
			}
		}
		else if (dir == 'l')
		{
			answer[row][col] = cnt;
			col--;
			if (answer[row][col - 1] != 0)
			{
				dir = 'u';
				continue;
			}
		}
		else if (dir == 'u')
		{
			answer[row][col] = cnt;
			row--;
			if (answer[row - 1][col] != 0)
			{
				dir = 'r';
				continue;
			}
		}
	}
    
    for(int i = 1; i < n+1; i++)
    {
        vector<int> temp;
        for(int j = 1; j < n+1; j++)
        {
            temp.push_back(answer[i][j]);
        }
        result.push_back(temp);
    }
    
    return result;
}