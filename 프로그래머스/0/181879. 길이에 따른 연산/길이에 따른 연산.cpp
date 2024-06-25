#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) 
{
    int answer = 0;
    int len = num_list.size();
    if(len <= 10)
    {
        answer++;
    }
    for(auto& e : num_list)
    {
        if(len > 10)
        {
            answer += e;
        }
        else
        {
            answer = answer * e;
        }
    }
    return answer;
}