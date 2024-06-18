#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) 
{
    int answer = 0;
    string s_a = to_string(a);
    string s_b = to_string(b);
    
    if(stoi(s_a + s_b) >= stoi(s_b + s_a))
    {
        answer = stoi(s_a + s_b);
    }
    else
    {
        answer = stoi(s_b + s_a);
    }
    return answer;
}