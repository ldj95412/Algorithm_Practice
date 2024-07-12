#include <string>
#include <vector>

using namespace std;

int solution(int num) 
{
    int answer = num;
    int cnt = 0;
    for(int i = 0; i < 500; i++)
    {
        if(answer == 1) break;
        
        if(answer%2==0)
        {
            answer = answer/2;
        }
        else if(answer%2==1)
        {
            answer = (answer*3)+1;
        }
        cnt++;
    }
    
    if(cnt >= 500) cnt = -1;
    
    return cnt;
}