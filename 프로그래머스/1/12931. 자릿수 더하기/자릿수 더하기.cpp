#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    
    string str = to_string(n);
    for(const auto& e : str) answer = answer + (e - '0');
    return answer;
}