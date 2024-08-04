#include <bits/stdc++.h>

using namespace std;
#define vi vector<int>
#define vvi vector<vector<int>>

class BT
{
    public:
    struct Node
    {
        int val = 0;
        Node* l = nullptr;
        Node* r = nullptr;
        
        int x = 0;
        int y = 0;
    };
    
    BT()
    {
        root = new Node;
    }
    
    void push(vi& param)
    {
        if(root->val == 0)
        {
            root->val = param[2];
            root->x = param[0];
            root->y = param[1];
            return;
        }
        
        Node* temp = new Node;
        temp->val = param[2];
        temp->x = param[0];
        temp->y = param[1];
        
        Node* cur = root;
        while(true)
        {
            if(cur->x < param[0])
            {
                if(cur->r == nullptr)
                {
                    cur->r = temp;
                    break;
                }
                cur = cur->r;
            }
            else
            {
                if(cur->l == nullptr)
                {
                    cur->l = temp;
                    break;
                }
                cur = cur->l;
            }
        }
    }
    
    void preorder(vi& copy) {preorder(copy, root);}
    void preorder(vi& copy, Node* cur)
    {
        if(cur)
        {
            copy.push_back(cur->val);
            if(cur->l) preorder(copy, cur->l);
            if(cur->r) preorder(copy, cur->r);
        }
    }
    
    void postorder(vi& copy) {postorder(copy, root);}
    void postorder(vi& copy, Node* cur)
    {
        if(cur)
        {
            if(cur->l) postorder(copy, cur->l);
            if(cur->r) postorder(copy, cur->r);
            copy.push_back(cur->val);
        }
    }
    
    private:
    Node* root = nullptr;
};

bool rule(vi a, vi b)
{
    if(a[1] == b[1]) return a[0] < b[0];
    return a[1] > b[1];
}

vector<vector<int>> solution(vector<vector<int>> nodeinfo) 
{
    vector<vector<int>> answer;
    for(int i = 0; i < nodeinfo.size(); i++) nodeinfo[i].push_back(i+1);
    sort(nodeinfo.begin(), nodeinfo.end(), rule);
    BT BinTree;
    for(auto& e : nodeinfo) BinTree.push(e);
    vi temp1, temp2;
    BinTree.preorder(temp1);
    BinTree.postorder(temp2);
    answer.push_back(temp1);
    answer.push_back(temp2);
    return answer;
}