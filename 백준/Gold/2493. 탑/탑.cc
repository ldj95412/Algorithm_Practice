#include "bits/stdc++.h"
using namespace std;
int arr[500001];
int box[500001];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int TrigNum = 0;

	int a;
	cin >> a;

	for (int i = 1; i <= a; i++)
	{
		cin >> arr[i];
	}

	for (int i = 1; i <= a; i++)
	{
		if (arr[i] <= arr[i-1])
		{
			box[i] = i - 1;
		}
		else
		{
			// 내 왼쪽꺼에 저장된 큰거
			int Index = i - 1;
			while (true)
			{
				if (Index == 0)
				{
					box[i] = 0;
					break;
				}

				if (arr[box[Index]] >= arr[i])
				{
					box[i] = box[Index];
					break;
				}
				else
				{
					Index = box[Index];
				}
			}
		}
	}

	for (int i = 1; i <= a; i++)
	{
		cout << box[i] << ' ';
	}
	cout << '\n';

	return 0;
}