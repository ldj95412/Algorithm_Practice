#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    
    int p = 0;
    int y = 0;
    
    for(const auto& e : s)
    {
        if(e == 'p' || e == ('p'-32)) p++;
        else if(e == 'y' || e == ('y'-32)) y++;
    }
    
    if(p != y) answer = false;

    return answer;
}