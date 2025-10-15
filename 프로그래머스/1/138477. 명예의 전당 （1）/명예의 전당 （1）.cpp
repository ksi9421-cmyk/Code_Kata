#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> temp;
    
    for(int i=0; i<score.size(); i++)
    {
        temp.clear();
        for(int j=0; j<=i; j++)
        {
            temp.push_back(score[j]);
        }
        
        sort(temp.begin(),temp.end(),greater<int>());
        
        if(temp.size()<=k)
        {
            answer.push_back(temp[i]);
        }
        else
        {
            temp.pop_back();
            answer.push_back(temp[k-1]);
        }
    }
    
    return answer;
}