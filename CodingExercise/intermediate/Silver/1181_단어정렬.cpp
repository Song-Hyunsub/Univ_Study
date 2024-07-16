/*
(1) compare 함수 구현
길이가 같을 때는 사전순으로 비교 형태를 만들도록 하고
길이가 다를 때는 길이순으로 비교 형태를 만들도록 한다.
(2) sort 함수로 정렬하기
sort(시작, 끝, 사용 함수) 에서 위 compare 함수를 사용할 것이므로
sort(arr, arr+N, compare)
(3) 정렬된 배열에서 같은 원소를 제거
이미 정렬된 배열이므로 같은 원소를 서로 붙어있다.
이를 이용하여 arr[i] = arr[i-1]일 때는 출력하지 않고 반복문 제일 위로 보내도록 한다.

*/
#include <iostream>
#include <algorithm>
using namespace std;

int compare(string a, string b){
    if(a.length() == b.length()){
        return a < b;
    } else {
        return a.length() < b.length();
    }
}

int main(){
    string arr[20000];
    int N;
    cin >> N;
    for(int i=0; i<N; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+N, compare);    // compare 함수대로 비교하여 정렬한다.
    for(int i=0; i<N; i++){
        if(arr[i]==arr[i-1]) continue;
        cout << arr[i] << "\n";
    }   
    return 0;
}
