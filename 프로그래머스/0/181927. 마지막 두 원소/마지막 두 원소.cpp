#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer = num_list;
    int len = num_list.size();
    
    if(num_list[len-1] > num_list[len-2])
    {
        answer.push_back(num_list[len-1] - num_list[len-2]);
    }
    else if(num_list[len-1] <= num_list[len-2])
    {
        answer.push_back(num_list[len-1]*2);
    }
    
    return answer;
}