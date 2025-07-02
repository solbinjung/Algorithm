#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    vector<string> has_suffix;
    for(int i=0; i<my_string.size();i++)
        has_suffix.push_back(my_string.substr(i));
    for(int j=0;j<has_suffix.size();j++){
        if(has_suffix[j] == is_suffix)
            return 1;
    }
    return 0;
}