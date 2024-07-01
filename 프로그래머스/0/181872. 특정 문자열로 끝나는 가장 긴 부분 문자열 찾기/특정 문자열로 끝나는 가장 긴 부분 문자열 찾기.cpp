#include <string>
#include <vector>

using namespace std;

string solution(string myString, string pat) 
{
    string answer = "";
    int idx = 0;
    int cnt = 0;
    
    for(int i = 0; i < myString.length(); i++)
    {
        for(int j = 0; j < pat.length(); j++)
        {
            if(myString[i+j] == pat[j]) cnt++;
            else cnt = 0;
            if(cnt == pat.length()) 
            {
                idx = i;
                cnt = 0;
            }
        }
    }
    
    for(int i = 0; i < idx + pat.length(); i++) answer.push_back(myString[i]);
    return answer;
}