#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int idx = 0;
    
    for(int i =0; i<s.size(); i++)
    {
        if(s[i]==' ')
        {
            idx =0;
        }
        else
        {
            if('a'<=s[i] && s[i]<='z' && idx%2==0)
            {
                s[i] = s[i]-32;
            }
            else if('A'<=s[i] && s[i]<='Z' && idx%2!=0)
            {
                s[i] = s[i] +32;
            }
            idx +=1;
        }
    }
    return s;
}