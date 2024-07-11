#include <string>
#include <vector>

using namespace std;

bool solution(int x) 
{
    bool answer = true;
    int value = 0;
    string str = to_string(x);
    
    for(auto e : str) value = value + (e-'0');
    
    if(x % value == 0) answer = true;
    else answer = false;
    return answer;
}