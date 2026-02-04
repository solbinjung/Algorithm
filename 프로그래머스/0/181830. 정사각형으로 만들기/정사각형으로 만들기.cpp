#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    int n = max(arr.size(), arr[0].size());
    
    arr.resize(n, vector<int>(n, 0));
    
    for(auto& row:arr) {
        row.resize(n, 0);
    }
    
    return arr;
}