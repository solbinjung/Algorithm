#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string a, string b) {
    string answer = "";
    int sum = 0;
    
    int i = a.length() - 1;
    int j = b.length() - 1;
    
    while(i>=0 || j>=0 || sum>0) 
    {
        if(i>=0) 
        {
            sum += a[i] - '0';
            i--;
        }
        if(j>=0)
        {
            sum += b[j] - '0';
            j--;
        }
        answer += to_string(sum % 10);
        
        sum /= 10;
    }
    reverse(answer.begin(), answer.end());
    
    return answer;
}