/* [Solution 1]
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

// 구조체
struct Coor
{
    int i, num1, num2;
};
// num1이 같을 때 num2의 크기순으로 비교, 다르면 num1 비교
bool cmp(Coor a, Coor b){
    if(a.num1 == b.num1){
        return a.num2 < b.num2;
    }
    return a.num1 < b.num1;
}

int main(){
    int N, i, num1, num2;
    cin >> N;
    Coor cd[N];
    for(i=0; i<N; i++){
        cin >> cd[i].num1 >> cd[i].num2;
    }
    sort(cd, cd+N, cmp);
    for(i=0; i<N; i++){
        printf("%d %d\n", cd[i].num1, cd[i].num2);
    }
}
*/

// [Solution 2]
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b){
    if(a.first == b.first)
        return a.second < b.second;
    return a.first < b.first;
}

int main(){
    int N, i, num1, num2;
    cin >> N;
    vector<pair<int, int>> vec;
    for(i=0; i<N; i++){
        cin >> num1 >> num2;
        vec.push_back(make_pair(num1, num2));
    }
    stable_sort(vec.begin(), vec.end(), compare);
    for(i=0; i<N; i++){
        printf("%d %d\n", vec[i].first, vec[i].second);
    }
}
