#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) 
{
    int answer = 1;
    for(int i = 0; i < is_prefix.length(); i++)
    {
        if(my_string[i] == is_prefix[i])
        {
            
        }
        else
        {
            answer = 0;
        }
    }
    return answer;
}