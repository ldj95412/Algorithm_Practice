#include <string>
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) 
{
    string answer = "";
    
    unordered_map<string, int> unmap;
    for(auto e : participant) unmap[e]++;
    
    for(int i = 0; i < completion.size(); i++)
    {
        unmap[completion[i]]--;
    }
    
    for(int i = 0; i < participant.size(); i++)
    {
        if(unmap[participant[i]] > 0)
        {
            answer += participant[i];
            break;
        }
    }
    
    return answer;
}