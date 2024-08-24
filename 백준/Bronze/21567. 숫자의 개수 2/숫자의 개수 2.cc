#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main()
{
	unsigned long long a, b, c;
	cin >> a >> b >> c;
	unsigned long long result = a * b * c;
	string temp = to_string(result);

	int numbers[10] = { 0, };

	for (auto& e : temp)
	{
		int val = e - '0';
		numbers[val] += 1;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << numbers[i] << endl;
	}
}