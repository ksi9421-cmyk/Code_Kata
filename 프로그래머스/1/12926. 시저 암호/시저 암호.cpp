#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for(int i=0; i<s.size(); i++)
    {
        if('A'<=s[i] && s[i]<='Z')
        {
            if(s[i]+n<=90)
            {
                answer +=(s[i]+n);
            }
            else
            {
                answer +=(s[i]+n-26);
            }
        }
        else if('a'<=s[i] && s[i]<='z')
        {
            if(s[i]+n<=122)
            {
                answer +=(s[i]+n);
            }
            else
            {
                answer +=(s[i]+n-26);
            }
        }
        else
        {
            answer += ' ';
        }
    }
    return answer;
}