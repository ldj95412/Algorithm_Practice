#include <iostream>
#include <string>

using namespace std;

int main()
{
	string temp;
	while (temp != "#")
	{
		int cnt = 0;
		getline(cin, temp);
		for (const auto& e : temp)
		{
			if (e == 'a' || e == 'e' || e == 'i' || e == 'o' || e == 'u')
			{
				cnt++;
			}
			else if (e == 'A' || e == 'E' || e == 'I' || e == 'O' || e == 'U')
			{
				cnt++;
			}
		}
		if(temp != "#") cout << cnt << endl;
	}

}