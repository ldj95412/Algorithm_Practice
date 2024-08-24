#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
	int sec;
	cin >> sec;
	
	vector<int> pos = { 0,0 };

	int move = 0;
	int quest = 1;
	int stack = 0;
	while (sec != 0)
	{
		if (stack == 0 && move < quest)
		{
			pos[1]++;
			move++;
			if (move == quest)
			{
				move = 0;
				stack++;
			}
		}
		else if (stack == 1 && move < quest)
		{
			pos[0]++;
			move++;
			if (move == quest)
			{
				move = 0;
				stack++;
				quest++;
			}
		}
		else if (stack == 2 && move < quest)
		{
			pos[1]--;
			move++;
			if (move == quest)
			{
				move = 0;
				stack++;
			}
		}
		else if (stack == 3 && move < quest)
		{
			pos[0]--;
			move++;
			if (move == quest)
			{
				move = 0;
				stack = 0;
				quest++;
			}
		}
		sec--;
	}

	for (const auto& e : pos) cout << e << " ";
}