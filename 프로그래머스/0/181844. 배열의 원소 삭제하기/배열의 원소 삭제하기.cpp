#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) 
{
    vector<int> answer;
    int cnt = 0;
    for(auto& e : arr)
    {
        cnt = 0;
        for(auto& f : delete_list)
        {
            if(e == f) cnt++;
        }
        if(cnt == 0) answer.push_back(e);
    }
    return answer;
}