#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    
    for(int i=0; i<numbers.size(); i++)
    {
        for(int j=i+1; j<numbers.size(); j++)
        {
            int result = numbers[i]+numbers[j];
            auto it = find(answer.begin(),answer.end(),result);
            if(it==answer.end())
               {
                   answer.push_back(result);
               }
        }
    }
    sort(answer.begin(),answer.end());
    return answer;
}