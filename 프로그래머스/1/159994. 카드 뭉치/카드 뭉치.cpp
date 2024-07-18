#include <string>
#include <queue>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) 
{
    string answer = "";
    queue<string> que1;
    queue<string> que2;
    
    for(auto& e : cards1) que1.push(e);
    for(auto& e : cards2) que2.push(e);

    for(int i = 0; i < goal.size(); i++)
    {
        if(goal[i] == que1.front())
        {
            que1.pop();
        }
        else if(goal[i] == que2.front())
        {
            que2.pop();
        }
        else if(goal[i] != que1.front() && goal[i] != que2.front())
        {
            return "No";
        }
    }
    return "Yes";
}