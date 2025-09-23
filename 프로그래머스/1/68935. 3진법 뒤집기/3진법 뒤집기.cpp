#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int>arr;
    
    while(n>0)
    {
        arr.push_back(n%3);
        n/=3;
    }
    for(int i=0; i<arr.size(); i++)
    {
        int n = pow(3,arr.size()-i-1);
        answer += arr[i] * n;
    }
    return answer;
}