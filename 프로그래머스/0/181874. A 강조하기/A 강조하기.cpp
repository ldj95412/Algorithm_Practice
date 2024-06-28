#include <string>
#include <vector>

using namespace std;

string solution(string myString) 
{
    string answer = "";
    for(auto& e : myString)
    {
        if(e == 'a')
        {
            answer.push_back(e-32);
        }
        else if(e < 96 && e != 'A' && e != ' ')
        {
            answer.push_back(e+32);
        }
        else if(e == 'A')
        {
            answer.push_back(e);
        }
        else if(e > 97)
        {
            answer.push_back(e);
        }
        else if(e == ' ')
        {
            answer.push_back(e);
        }
    }
    return answer;
}