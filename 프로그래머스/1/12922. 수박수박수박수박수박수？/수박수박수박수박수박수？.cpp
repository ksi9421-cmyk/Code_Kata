#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    vector<string> arr;
    string answer;
 
    for(int i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            arr.push_back("수");
        }
        else
        {
            arr.push_back("박");
        }    
    }
    for(auto it : arr)
    {
       answer += it;
    }
    return answer;
}