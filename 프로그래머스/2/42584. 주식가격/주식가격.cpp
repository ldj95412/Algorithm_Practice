#include <string>
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

vector<int> solution(vector<int> a) 
{    
    vector<int> answer;
    
    for(int i = 0; i < a.size() ; i++)
    {
        int cnt = 0;
        for(int j = i+1; j < a.size(); j++)
        {
            if(a[i] <= a[j])
            {
                cnt++;
            }
            else
            {
                cnt++;
                break;
            }
        }
        answer.push_back(cnt);
    }
    return answer;
}