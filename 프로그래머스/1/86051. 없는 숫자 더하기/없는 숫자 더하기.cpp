#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) 
{
    int answer = 0;
    vector<int> vec(10,0);
    
    for(auto& e : numbers)
    {
        vec[e]++;
    }
    
    for(int i = 0; i < 10; i++)
    {
        if(vec[i] == 0) answer += i;
    }
    
    return answer;
}