#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr, int idx) 
{
    int answer = 0;
    int cnt = 0;
    for(int i = idx; i < arr.size(); i++)
    {
        if(arr[i] == 1) 
        {
            answer = i;
            cnt++;
            break;
        }
    }
    if(cnt == 0)
    {
        answer = -1;
    }
    return answer;
}