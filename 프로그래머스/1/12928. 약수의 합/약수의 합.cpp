#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int answer = 0;
    vector<int> temp;
    for(int i = 1; i <= n; i++)
    {
        if(n%i == 0) temp.push_back(i);
    }
    
    for(auto e : temp) answer+=e;
    return answer;
}