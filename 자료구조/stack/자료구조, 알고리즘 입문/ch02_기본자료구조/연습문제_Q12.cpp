#include <iostream>
using namespace std;

typedef struct {
  int y;
  int m;
  int d;
} Date;

// 각 달의 날 수
int mdays[][12] = {
  {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
  {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

// year년이 윤년인가?
int isleap(int year)
{
  return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

// (1) y년 m월 d일을 나타내는 구조체를 반환해주는 함수
Date DateOf(int y, int m, int d) {
  Date date = { y, m, d };
  return date;
}

// (2) 날짜 x의 n일 뒤의 날짜를 반환하는 함수
Date After(Date x, int n) {
  x.d += n;
  while (x.d > mdays[isleap(x.y)][x.m - 1]) {
    x.d -= mdays[isleap(x.y)][x.m - 1];
    if (++x.m > 12) {
      x.m = 1;
      ++x.y;
    }
  }
  return x;
}

// (3) 날짜 x의 n일 앞의 날짜를 반환하는 함수
Date Before(Date x, int n) {
  x.d -= n;
  while (x.d < 1) {
    if (--x.m < 1) {
      x.m = 12;
      --x.y;
    }
    x.d += mdays[isleap(x.y)][x.m - 1];
  }
  return x;
}

// y년 m월 d일의 그 해 지난 날 수를 구함
int dayof_year(int y, int m, int d){
  int days = d;  // 날 수
  for(int i = 1; i < m; i++){
    days += mdays[isleap(y)][i-1];  
  }
  return days;
}

int main(){
  int retry;  // 다시?
  do {
    int year, month, day, n;
    cout << "년: ";  cin >> year;
    cout << "월: ";  cin >> month;
    cout << "일: ";  cin >> day;

    Date date = DateOf(year, month, day);
    cout << year << "년의 " << dayof_year(year, month, day) << "일째입니다." << endl;

    cout << "몇 일 후의 날짜를 구할까요?: "; cin >> n;
    Date afterDate = After(date, n);
    cout << n << "일 후의 날짜: " << afterDate.y << "년 " << afterDate.m << "월 " << afterDate.d << "일" << endl;

    cout << "몇 일 전의 날짜를 구할까요?: "; cin >> n;
    Date beforeDate = Before(date, n);
    cout << n << "일 전의 날짜: " << beforeDate.y << "년 " << beforeDate.m << "월 " << beforeDate.d << "일" << endl;

    cout << "다시 할까요?(1 ... 예/0 ... 아니오): ";
    cin >> retry;
  } while(retry == 1);
  return 0;
}

/*
년: 2024
월: 7
일: 24
2024년의 206일째입니다.
몇 일 후의 날짜를 구할까요?: 50
50일 후의 날짜: 2024년 9월 12일
몇 일 전의 날짜를 구할까요?: 50
50일 전의 날짜: 2024년 6월 4일
다시 할까요?(1 ... 예/0 ... 아니오): 0
*/
