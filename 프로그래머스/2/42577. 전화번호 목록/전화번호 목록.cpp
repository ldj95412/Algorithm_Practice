#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) 
{
    bool answer = true;
    unordered_map<string, int> unmap;
    
    // 전화번호를 모두 맵에 저장한다.
    for(auto e : phone_book) unmap[e]++;
    
    // 각 전화번호를 한번씩 순회하여 맵에 있는지 확인한다.
    for(auto e : phone_book)
    {
        string temp = "";
        
        for(auto c : e)
        {
            temp.push_back(c);
            if(temp != e && unmap.find(temp) != unmap.end())
            {
                return false;
            }
        }
        
    }
    return answer;
}