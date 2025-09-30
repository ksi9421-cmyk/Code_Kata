#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> result;
    
    for(int i=0; i<commands.size();i++)
    {
        
        for(int j=commands[i][0]-1; j<commands[i][1]; j++)
        {
            answer.push_back(array[j]);
        
        }
        sort(answer.begin(),answer.end());
        result.push_back(answer[commands[i][2]-1]);
        answer.clear();
    }
    
    return result;
}