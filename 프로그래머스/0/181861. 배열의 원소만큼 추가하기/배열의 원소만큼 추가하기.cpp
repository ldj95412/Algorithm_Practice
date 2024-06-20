#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    
    for(auto& e : arr)
    {
        for(int i = 0; i < e; i++)
        {
            answer.push_back(e);
        }
    }
    
    return answer;
}