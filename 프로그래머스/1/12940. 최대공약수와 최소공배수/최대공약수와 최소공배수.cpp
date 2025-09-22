#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    int M = max(n,m);
    
    for(M; M>=1; M--)
    {    
        if(n%M==0 && m%M==0)
        {
            answer.push_back(M);
            break;
        }
       
    }
    for(int i =1; ;i++)
    {
        if(i%n==0 && i%m==0)
        {
            answer.push_back(i);
            break;
        }
    }
    return answer;
}