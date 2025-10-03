#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    vector<int> idx(26,-1);
    
    for(int i=0; i<s.size(); i++)
    {
        int index=s[i]-'a';
        if(idx[index]==-1)
        {
            answer.push_back(-1);
        }
        else
        {
            answer.push_back(i-idx[index]);
        }
        idx[index]=i;
    }
    
    return answer;
}