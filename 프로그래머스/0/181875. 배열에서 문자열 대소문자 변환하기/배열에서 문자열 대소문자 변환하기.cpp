#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) 
{
    vector<string> answer;
    string temp;
    for(int i = 0; i < strArr.size(); i++)
    {
        if(i%2==1)
        {
            //대문자로 바꿔서
            for(auto& e : strArr[i])
            {
                if((int)e > 96)
                    temp.push_back(e-32);
                else
                    temp.push_back(e);
            }
            answer.push_back(temp);
            temp.clear();
        }
        else
        {
            //소문자로 바꿔서
            for(auto& e : strArr[i])
            {
                if((int)e < 96)
                    temp.push_back(e+32);
                else
                    temp.push_back(e);
            }
            answer.push_back(temp);
            temp.clear();
        }
    }
    return answer;
}