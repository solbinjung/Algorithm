#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";
    // 1. false로 초기화한 체크리스트 생성
    vector<bool> check(my_string.length(), false);
    // 2. indices에 적힌 인덱스 위치에 true로 변경하여 버려야 할 글자 위치 체크
    for(int index:indices){
        check[index]=true; 
    }
    // 3. 살아남은 문자들을 answer에 저장
    for(int i=0;i<my_string.length();i++){
        if(check[i]==false)
            answer+=my_string[i];
    }
    return answer;
}