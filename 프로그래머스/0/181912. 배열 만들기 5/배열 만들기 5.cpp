#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    for(int i=0;i<intStrs.size();i++){
        string number ="";
        for(int j=s;j<s+l;j++){
            number+=intStrs[i][j];
        }
        int num = stoi(number);
        if(num > k)
            answer.push_back(num);
    }
    return answer;
}