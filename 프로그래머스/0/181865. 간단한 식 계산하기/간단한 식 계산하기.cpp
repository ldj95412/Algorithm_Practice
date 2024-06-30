#include <string>
#include <vector>

using namespace std;

int solution(string binomial) 
{
    int answer = 0;
    int temp = 0;
    int oper = 0;
    string a;
    string b;
    for(int i = 0; i < binomial.length(); i++)
    {
        if(binomial[i] == ' ')
        {
            temp = i;
            break;
        }
    }
    
    if(binomial[temp+1] == '+')
    {
        oper = 1;
    }
    else if(binomial[temp+1] == '-')
    {
        oper = 2;
    }
    else if(binomial[temp+1] == '*')
    {
        oper = 3;
    }
    
    for(int i = 0; i < temp; i++)
    {
        a.push_back(binomial[i]);
    }
    for(int i = temp+3; i < binomial.length(); i++)
    {
        b.push_back(binomial[i]);
    }
    
    if(oper == 1) answer = stoi(a) + stoi(b);
    else if(oper == 2) answer = stoi(a) - stoi(b);
    else if(oper == 3) answer = stoi(a) * stoi(b);
    
    return answer;
}