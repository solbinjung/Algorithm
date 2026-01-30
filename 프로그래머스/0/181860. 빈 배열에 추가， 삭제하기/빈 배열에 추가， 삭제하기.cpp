#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<bool> flag) {
    vector<int> answer;
    for(int i=0; i<arr.size(); i++){
        switch(flag[i]){
            case true:
                for(int j=0;j<arr[i]*2;j++)
                    answer.push_back(arr[i]);
                break;
            case false:
                for(int j=0;j<arr[i];j++)
                    answer.pop_back();
                break;
        }
    }
    return answer;
}