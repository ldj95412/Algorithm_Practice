#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) 
{
    long long answer = 0;
    double temp = sqrt(n);
    if((temp - (int)temp) == 0) answer = (temp+1)*(temp+1);
    else answer = -1;
    return answer;
}