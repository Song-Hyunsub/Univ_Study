/* [Solution 1]
#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;

// 구조체
struct AgeName
{
    int i, age;
    string s;
};
// 나이가 같을 때 입력순으로 비교, 다르면 나이 순 오름차순
bool cmp(AgeName a, AgeName b){
    if(a.age == b.age){
        return a.i < b.i;
    } else {
        return a.age < b.age;
    }
}

int main(){
    int N, i;
    cin >> N;
    AgeName arr[N];  // 구조체 배열 선언
    for(int i=0; i<N; i++){
        arr[i].i = i;  // 입력된 순서를 기록함
        cin >>  arr[i].age >> arr[i].s;
    }
    sort(arr, arr+N, cmp);  // 위의 함수에 따른 정렬
    for(i=0; i<N; i++){
        printf("%d %s\n", arr[i].age, arr[i].s.c_str());
    }
}
*/

// [Solution 2]
#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

bool cmpfunc(pair<int, string> a, pair<int, string> b){
    return a.first < b.first;    // 나이 기준으로 비교
}

int main(){
    int N, i, age;
    string str;
    vector<pair<int, string>> vec;    // 페어 타입의 벡터 vec 선언
    
    cin >> N;
    
    for(i=0; i<N; i++){
        cin >> age >> str;
        vec.push_back(make_pair(age, str));    
        // age와 str을 쌍으로 하는 pair형 벡터 vec에 원소를 집어넣는다
    }
    stable_sort(vec.begin(), vec.end(), cmpfunc);
    // stable_sort : 안정 정렬 알고리즘으로 
    // 정렬 후에도 동일한 값을 가진 요소들의 상대적인 순서가 입력 순서와 동일하게 유지
    for(i=0; i<N; i++){
        printf("%d %s\n", vec[i].first, vec[i].second.c_str());
        // .first => 나이, .second => 이름
    }
}
