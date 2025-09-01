#include <string>
#include <vector>

using namespace std;

bool solution(int x) 
{
    int sum=0;
    int copy= x;
   
    while(copy>0)
    {
        sum += copy%10;
        copy /= 10;
    }
  
   
    if(x % sum == 0)
    {return true;}
    else
    {return false;}
}