#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) 
{
    vector<int> man1 = {1,2,3,4,5};
    vector<int> man2 = {2,1,2,3,2,4,2,5};
    vector<int> man3 = {3,3,1,1,2,2,4,4,5,5};
    vector<int> pnt = {0,0,0};
    set<int> myset;
    
    for(int i = 0; i < answers.size(); i++)
    {
        if(answers[i] == man1[i%5]) pnt[0]++;
        if(answers[i] == man2[i%8]) pnt[1]++;
        if(answers[i] == man3[i%10]) pnt[2]++;
    }
    
    auto max_it = max_element(pnt.begin(), pnt.end());
    for(int i = 0; i < pnt.size(); i++)
    {
        if(*max_it == pnt[i])
        {
            myset.insert(i+1);
        }
    }
    
    vector<int> answer(myset.begin(), myset.end());
    
    return answer;
}