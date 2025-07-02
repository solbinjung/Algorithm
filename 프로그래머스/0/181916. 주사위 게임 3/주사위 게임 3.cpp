#include <string>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
using namespace std;

int solution(int a, int b, int c, int d) {
    map<int, int> count;
    count[a]++;
    count[b]++;
    count[c]++;
    count[d]++;

    vector<pair<int, int>> pairs(count.begin(), count.end());
    sort(pairs.begin(), pairs.end(), [](auto& x, auto& y) {
        return x.second > y.second;  // count 많은 순
    });

    if (pairs[0].second == 4) {
        return 1111 * pairs[0].first;
    } else if (pairs[0].second == 3) {
        return pow(10 * pairs[0].first + pairs[1].first, 2);
    } else if (pairs.size() == 2 && pairs[0].second == 2 && pairs[1].second == 2) {
        return (pairs[0].first + pairs[1].first) * abs(pairs[0].first - pairs[1].first);
    } else if (pairs[0].second == 2) {
        return pairs[1].first * pairs[2].first;
    } else {
        return min({a, b, c, d});
    }
}