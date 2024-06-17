#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 0;
    int len = is_suffix.length();
    for(int i = 0; i < len; i++)
    {
        if(my_string[my_string.length()-i-1] == is_suffix[len-i-1])
        {
            answer = 1;
        }
        else
        {
            answer = 0;
            break;
        }
    }
    return answer;
}