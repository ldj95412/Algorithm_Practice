#include <iostream>
#include <string>

using namespace std;

int main()
{
	string temp;
	getline(cin, temp);

	if (temp == "fdsajkl;" || temp == "jkl;fdsa")
	{
		cout << "in-out";
	}
	else if (temp == "asdf;lkj" || temp == ";lkjasdf")
	{
		cout << "out-in";
	}
	else if (temp == "asdfjkl;")
	{
		cout << "stairs";
	}
	else if (temp == ";lkjfdsa")
	{
		cout << "reverse";
	}
	else
	{
		cout << "molu";
	}
}