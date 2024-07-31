#include <iostream>
#include <ctime>
using namespace std;

void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

void shuffle(int a[], int n) {
    srand(time(0)); // 랜덤 시드 설정
    for (int i = 0; i < n; i++) {
        int j = rand() % n; // 0에서 n-1 사이의 랜덤 인덱스 생성
        swap(a[i], a[j]);
    }
}

int main() {
    int n = 5;
    int a[] = {1, 2, 3, 4, 5};

    // Q9: 배열 순서 뒤섞기
    shuffle(a, n);
    cout << "shuffle 결과: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
