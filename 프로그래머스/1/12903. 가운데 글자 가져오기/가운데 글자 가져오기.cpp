#include <string>
#include <vector>

using namespace std;

string solution(string s) 
{
    string answer;
  
    int a = s.size() / 2;
    
    if (s.size()%2!=0)
    {
        return s.substr(a,1);
    }
    else
    {
        return s.substr(a-1,2);
    }
}