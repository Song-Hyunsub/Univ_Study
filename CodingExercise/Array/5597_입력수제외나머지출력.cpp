/*
1~30에서 입력된 수를 지우고 나머지를 출력(작은 값이 위, 다른 값이 아래)하는 원리

*/


// [Solution 1] => vector, algorithm 헤더 이용하기
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N = 30;
    vector<int> v(N);
    for (int i = 0; i < N; i++) {
        v[i] = i + 1;
    }

    int input;
    while (cin >> input) {
        if (input >= 1 && input <= 30) {
            auto new_end = remove(v.begin(), v.end(), input);   // std::remove를 사용하여 해당 값을 벡터의 끝으로 이동시키고 새로운 끝을 반환받음
            v.erase(new_end, v.end());       // std::vector::erase를 사용하여 새로운 끝부터 실제 끝까지의 원소를 삭제
        } else {
            cout << "Error!" << endl;
            return 0;
        }
    }

    sort(v.begin(), v.end());    // 원소 정렬
    for (int val : v) {
        cout << val << endl;
    }
    return 0;
}

/*
[Solution 2] => vector 헤더 + sort(버블 정렬) 함수 + remove 함수 구현하여 이용하기

#include <iostream>
#include <vector>
using namespace std;

// 수동 remove 함수 구현
vector<int>::iterator remove(vector<int>& vec, int value) {
    auto it = vec.begin();
    while (it != vec.end()) {
        if (*it == value) {
            it = vec.erase(it);
        } else {
            ++it;
        }
    }
    return it;
}

// 수동 sort 함수 구현 (간단한 버블 정렬)
void bubble_sort(vector<int>& vec) {
    bool swapped;
    do {
        swapped = false;
        for (size_t i = 1; i < vec.size(); ++i) {
            if (vec[i - 1] > vec[i]) {
                swap(vec[i - 1], vec[i]);
                swapped = true;
            }
        }
    } while (swapped);
}

int main() {
    int N = 30;
    vector<int> v(N);
    for (int i = 0; i < N; i++) {
        v[i] = i + 1;
    }

    int input;
    while (cin >> input) {
        if (input >= 1 && input <= 30) {
            remove(v, input);
        } else {
            cout << "Error!" << endl;
            return 0;
        }
    }

    bubble_sort(v);
    for (int val : v) {
        cout << val << endl;
    }

    return 0;
}

*/

/*
[Solution 3] 배열로 구현하기

#include <iostream>
using namespace std;

int main() {

  int arr[31] = { 0, };    //  모든 원소를 0으로 초기화
  int a;

  for(int i = 0; i < 28; i++) {    //  입력한 28개의 수를 인덱스로 본다 => 존재 상태 1로 초기화한다.
    cin >> a;
    if(a>=1 && a<=30){
    arr[a] = 1;
    } else {
        cout << "Error!";
        return 0;
    }
  }

  for(int i = 1; i <= 30; i++) {    // 존재 상태 배열이 0인 원소만 찾아서 출력한다.
    if(!arr[i]) cout << i << '\n';
  }

  return 0;
}
*/
