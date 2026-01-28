#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    string answer = "";
    int first_idx = 0;
    int idx=0;
    for(auto& i:n_str){
        if(i != '0'){
            first_idx = idx;
            break;
        }
        idx++;
    }
    answer = n_str.substr(first_idx);
    
    return answer;
}