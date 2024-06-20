#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) 
{
    vector<string> answer;
    string temp = "";
    
    for(auto& e : my_string)
    {
        if(e != ' ')
        {
            temp.push_back(e);
        }
        else if(e == ' ' && temp.empty() == false)
        {
            answer.push_back(temp);
            temp.clear();
        }
    }
    
    if(temp.empty() == false)
    {
        answer.push_back(temp);
    }
    
    return answer;
}