#include <string>
#include <vector>

using namespace std;

string solution(string myString) 
{
    string answer = "";
    for(auto& e : myString)
    {
        if(e < 'l')
        {
            answer.push_back('l');
        }
        else
        {
            answer.push_back(e);
        }
    }
    return answer;
}