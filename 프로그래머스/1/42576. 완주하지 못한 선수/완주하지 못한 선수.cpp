#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    unordered_map<string, int> list;
    for(const auto& p: participant)
        list[p]++;
    for(const auto& c: completion)
        list[c]--;
    for(const auto& i: list) {
        if(i.second > 0)
            return i.first;
    }
}