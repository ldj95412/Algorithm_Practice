#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) 
{
    int answer = 0;
    int len1 = arr1.size();
    int len2 = arr2.size();
    
    if(len1 != len2 && len1 > len2)
    {
        answer = 1;
        return answer;
    }
    else if(len1 != len2 && len1 < len2)
    {
        answer = -1;
        return answer;
    }
    
    int sum1 = 0;
    int sum2 = 0;
    for(int i = 0; i < len1; i++)
    {
        sum1 += arr1[i];
        sum2 += arr2[i];
    }
    
    if(sum1 > sum2)
    {
        answer = 1;
    }
    else if(sum1 < sum2)
    {
        answer = -1;
    }
    return answer;
}