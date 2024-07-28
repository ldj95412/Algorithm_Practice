#include <vector>
#include <queue>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    
    queue<int> que;
    que.push(arr[0]);
    auto last = arr[0];
    
    for(int i = 1; i < arr.size(); i++)
    {
        if(last != arr[i])
        {
            que.push(arr[i]);
            last = arr[i];
        }
    }
    
    int size = que.size();
    for(int i = 0; i < size; i++)
    {
        answer.push_back(que.front());
        que.pop();
    }

    return answer;
}