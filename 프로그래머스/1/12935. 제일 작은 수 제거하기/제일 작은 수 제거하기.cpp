#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    
    int min = *min_element(arr.begin(),arr.end());
    
    auto it = find(arr.begin(), arr.end(), min); 
    arr.erase(it);
    if(arr.size()<1) {arr.push_back(-1);}
    return arr;
  
}