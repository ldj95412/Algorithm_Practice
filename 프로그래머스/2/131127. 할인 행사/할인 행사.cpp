#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) 
{
    int answer = 0;
    unordered_map<string, int> unmap;
    
    for (int i = 0; i < want.size(); i++)
    {
        unmap[want[i]] = number[i];
    }
    
    for (int i = 0; i < discount.size()-9; i++)
    {
        unordered_map<string, int> unmap_temp;
        bool flag = false;
        
        for(int j = i; j < i + 10; j++)
        {
            unmap_temp[discount[j]]++;
        }
        
        for(const auto& e : unmap_temp)
        {
            if(unmap.find(e.first) == unmap.end() || e.second != unmap.find(e.first)->second)
            {
                flag = true;
                break;
            }
        }
        
        if(flag) continue;
        answer++;
    }
    return answer;
}