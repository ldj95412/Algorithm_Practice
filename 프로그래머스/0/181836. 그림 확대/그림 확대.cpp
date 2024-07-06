#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) 
{
    vector<string> answer;
    for(int i = 0; i < picture.size(); i++)
    {
        string str_temp;
        for(int j = 0; j < picture[i].length(); j++)
        {
            for(int val = 0; val < k; val++)
            {
                str_temp.push_back(picture[i][j]);
            }
        }
        for(int val = 0; val < k; val++)
        {
                answer.push_back(str_temp);
        } 
    }
    return answer;
}