#include <string>
#include <vector>


using namespace std;

int solution(vector<int> num_list) 
{
    int answer = 0;
    int odd_count = 1;
    int even_count = 1;
    
    for(int i = num_list.size()-1; i >= 0; i--)
    {
        if(num_list[i]%2 == 0)
        {
            answer = answer + num_list[i] * even_count;
            even_count = even_count * 10;
        }
        else
        {
            answer = answer + num_list[i] * odd_count;
            odd_count = odd_count * 10;
        }
    }
    
    return answer;
}