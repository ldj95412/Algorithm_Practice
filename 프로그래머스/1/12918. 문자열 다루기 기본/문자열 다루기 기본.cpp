#include <string>
#include <vector>

using namespace std;

bool solution(string s) 
{
    bool answer = true;
    if(!(s.size() == 4 || s.size() == 6))
    {
        answer = false;
        return answer;
    }
    
    for(const auto& e : s)
        {
            if(e - '0' >= 0 && e - '0' <= 9)
            {
            }
            else
            {
                answer = false;
                break;
            }
        }
    return answer;
}