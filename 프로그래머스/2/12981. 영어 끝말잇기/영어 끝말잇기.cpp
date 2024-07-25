#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

vector<int> solution(int n, vector<string> words) 
{
    vector<int> answer;
    unordered_map<string, int> hash_map;
    int cnt = 0;
    
    // !. 첫번째 해시는 무조건 담는다.
    hash_map[words[0]]++;
    // 1. 주어진 단어를 해시맵에 담는 반복문을 만든다.
    for(int i = 1; i < words.size(); i++)
    {
        // 2. 만약, 중복되거나 끝말이 아닌 단어가 온다면 count를 기록해둔다.
        // !. 한글자인 단어도 검출
        if(hash_map[words[i]] >= 1 || words[i-1][words[i-1].size()-1] != words[i][0] || words[i].size() == 1)
        {
            cnt = i;
            break;
        }
        else
        {
            hash_map[words[i]]++;
        }
    }

    // !. 만약 아무도 실패하지 않았다면, 0,0을 리턴한다.
    if(cnt == 0)
    {
        answer.push_back(0);
        answer.push_back(0);
        return answer; 
    }
    // 3. 카운트에 따라서 n과 조합하여 가장 먼저 탈락하는 사람의 번호와 몇번째 차례인지 도출해낸다.
    answer.push_back(cnt%n+1); // 가장 먼저 탈락하는 사람
    answer.push_back(cnt/n+1); // 몇번째 차례
    return answer;
}