// 읽은 10진수를 2~36진수로 기수 변환하여 표시
#include <iostream>
using namespace std;
#define swap(type, x, y)  do{ type t=x; x=y; y=t; } while(0)

// 정숫값 x를 n진수로 변환한 숫자 문자의 정렬을 배열 d에 저장
int card_conv(unsigned x, int n, char d[]) {
  char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int digits = 0;  // 변환 후 자릿수
  int original_x = x; // 원래의 x값 저장
  
  if (x == 0) {
    d[digits++] = dchar[0];  // 변환 후에도 0
  } else {
    while (x) {
      cout << n << " | " << string(9, ' ') << x << " ... " << x % n << endl;
      cout << "  + ----------" << endl;
      d[digits++] = dchar[x % n];  // n으로 나눈 나머지를 저장
      x /= n;
    }
  }
  
  for (int i = 0; i < digits / 2; i++) {  // 배열 d를 역순으로 정렬
    swap(char, d[i], d[digits - i - 1]);
  }
  
  return digits;
}

int main() {
  cout << "10진수를 기수 변환합니다." << endl;
  int retry;  // 한 번 더?
  do {
    unsigned no;   // 변환하는 정수
    int cd;        // 기수
    char cno[512]; // 변환한 값의 각 자리의 숫자를 저장하는 문자 배열
    
    cout << "변환하는 음이 아닌 정수: ";
    cin >> no;
    
    do {
      cout << "어떤 진수로 변환할까요?(2-36): ";
      cin >> cd;
    } while (cd < 2 || cd > 36);
    
    cout << endl;
    int dno = card_conv(no, cd, cno);  // no를 dno자리의 cd진수로 변환
    cout << "             0" << endl;
    
    cout << cd << "진수로는 ";
    for (int i = 0; i < dno; i++) {  // 각 자리의 문자를 차례로 출력
      cout << cno[i];
    }
    cout << "입니다." << endl;
    
    cout << "한 번 더 할까요?(1 --- 예/0 --- 아니오): ";
    cin >> retry;
  } while (retry == 1);
  
  return 0;
}

/*
10진수를 기수 변환합니다.
변환하는 음이 아닌 정수: 59
어떤 진수로 변환할까요?(2-36): 2

2 |         58 ... 0     
  + ----------
2 |         29 ... 1
  + ----------
2 |         14 ... 0
  + ----------
2 |          7 ... 1
  + ----------
2 |          3 ... 1
  + ----------
2 |          1 ... 1
  + ----------
             0
2진수로는 111011입니다.
한 번 더 할까요?(1 --- 예/0 --- 아니오): 0
*/
