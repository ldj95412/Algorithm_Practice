#include<string>
#include <stack>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    stack<char> stk;
    
    if(s[0] == ')') return false;
    else stk.push(s[0]);

    for(int i = 1; i < s.size(); i++)
    {
        if(s[i] == '(') stk.push(s[i]);
        else if(s[i] == ')' && !stk.empty()) stk.pop();
        else if(s[i] == ')' && stk.empty()) return false;
    }
    
    if(stk.empty()) return true;
    else return false;
}