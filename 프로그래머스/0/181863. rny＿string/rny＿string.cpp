#include <string>
#include <vector>

using namespace std;

string solution(string rny_string) {
    for(auto c: rny_string){
        int pos = rny_string.find("m");
        if(pos != string::npos) {
            rny_string.replace(pos, 1,"rn");
        }
    }
    
    return rny_string;
}