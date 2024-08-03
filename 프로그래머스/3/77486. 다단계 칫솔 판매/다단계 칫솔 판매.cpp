#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<string> enroll, vector<string> referral, vector<string> seller, vector<int> amount) 
{
    vector<int> answer;
    
    unordered_map<string, string> umap_parent;
    for(int i = 0; i < enroll.size(); i++) umap_parent[enroll[i]] = referral[i];
    
    unordered_map<string, int> umap_money;
    for(const auto& e : enroll) umap_money[e] = 0;
    
    for(int i = 0; i < seller.size(); i++)
    {
        int money = amount[i] * 100;
        string str = seller[i];
        
        while(money > 0 && str != "-")
        {
            int vat = money / 10;
            umap_money[str] += money - vat;
            
            if(umap_parent.find(str) != umap_parent.end())
            {
                str = umap_parent[str];
            }
            else
            {
                break;
            }
            
            money = vat;
        }
    }
    
    for(const auto& e : enroll) answer.push_back(umap_money[e]);
    
    return answer;
}