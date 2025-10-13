#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    
    for(int i=1; i<food.size(); i++)
    {
        int count = food[i] /2;
        answer += string(count,'0'+i);
    }
    
    answer += '0';
    
    for(int i= food.size()-1; i>=1; i--)
    {
        int count = food[i]/2;
        answer += string(count, '0'+i);
    }
    return answer;
}
