#include <string>
#include <vector>

using namespace std;

int solution(string num_str) 
{
    int answer = 0;
    for(auto& e : num_str)
    {
        answer = answer + (int)e - 48;
    }
    return answer;
}