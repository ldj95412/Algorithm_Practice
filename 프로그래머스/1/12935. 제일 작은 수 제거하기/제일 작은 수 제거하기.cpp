#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{
    return a > b;
}

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    if(arr.size() == 1)
    {
        answer.push_back(-1);
        return answer;
    }
    
    answer = arr;
    auto it = min_element(arr.begin(), arr.end()) - arr.begin();
    
    for(; it < arr.size()-1; it++)
    {
        answer[it] = arr[it+1];
    }
    
    answer.pop_back();
    return answer;
}