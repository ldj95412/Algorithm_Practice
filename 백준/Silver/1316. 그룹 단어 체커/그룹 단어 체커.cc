#include <iostream>
#include <string>

using namespace std;

int main()
{
	int input;
	cin >> input;

	int count = 0;
	for (int i = 0; i < input; i++)
	{
		int alpha[26] = { 0 };
		string temp;
		cin >> temp;

		alpha[temp[0]-97]++;

		for (int j = 1; j < temp.length(); j++)
		{
			if ((temp[j - 1] - 97) == (temp[j] - 97))
			{

			}
			else
			{
				alpha[temp[j] - 97]++;
			}
		}

		for (int j = 0; j < 26; j++)
		{
			if (alpha[j] > 1)
			{
				break;
			}
			
			if (j == 25 && alpha[j] <= 1) count++;
		}
	}

	cout << count;

	return 0;
}