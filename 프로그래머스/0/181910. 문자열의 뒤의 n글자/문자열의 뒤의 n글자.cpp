#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    int len = my_string.length();
    for(int i = n-1; i >= 0; i--)
    {
        answer.push_back(my_string[len-1-i]);
    }
    return answer;
}