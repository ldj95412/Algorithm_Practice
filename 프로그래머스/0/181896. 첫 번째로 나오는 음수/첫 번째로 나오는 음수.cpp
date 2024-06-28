#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) 
{
    int answer = 0;
    int cnt = 0;
    for(int i = 0; i < num_list.size(); i++)
    {
         if(num_list[i] < 0)
         {
             answer = i;
             cnt++;
             break;
         }
    }
    
    if(answer == 0 && cnt == 0)
    {
        answer = -1;
    }
    return answer;
}