#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    while(true){
        answer.push_back(n);
        if(n==1)
            break;
        (n % 2 == 0) ? n = n / 2 : n = 3 * n + 1;
    }
    return answer;
}