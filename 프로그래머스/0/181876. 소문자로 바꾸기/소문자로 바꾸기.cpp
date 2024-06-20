#include <string>
#include <vector>

using namespace std;

string solution(string myString) 
{
    string answer = "";
    for(auto& e : myString)
    {
        if((int)e > 64 && (int)e < 97)
        {
            answer.push_back((int)e + 32);
        }
        else
        {
            answer.push_back(e);
        }
    }
    return answer;
}