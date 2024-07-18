#include <string>
#include <stack>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) 
{
    int answer = 0;
    stack<int> stack;
    
    for(int i = 0; i < moves.size(); i++)
    {
        int grab = 0;
        int prev = stack.empty() ? false : stack.top();
        for(int j = 0; j < board.size(); j++)
        {
            if(board[j][moves[i]-1] != 0)
            {
               stack.push(board[j][moves[i]-1]);
               grab = board[j][moves[i]-1];
               board[j][moves[i]-1] = 0;
               break;
            }
        }
        
        if(!stack.empty() && grab == prev)
        {
            stack.pop();
            stack.pop();
            answer+=2;
        }
    }
    return answer;
}