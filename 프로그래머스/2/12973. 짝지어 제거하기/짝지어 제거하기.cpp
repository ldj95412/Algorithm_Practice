#include <iostream>
#include <string>
#include <stack>
using namespace std;

int solution(string s)
{
    int answer = 1;
    stack<char> stack;
    
    stack.push(s[0]);
    
    for (int i = 1; i < s.size(); i++)
    {
        if(!stack.empty() && s[i] == stack.top())
        {
            stack.pop();
        }
        else if(stack.empty())
        {
            stack.push(s[i]);
        }
        else if(!stack.empty() && s[i] != stack.top())
        {
            stack.push(s[i]);
        }
    }
    
    if(stack.empty()) return true;
    
    return false;
}
