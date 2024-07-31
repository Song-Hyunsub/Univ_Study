#include <iostream>
using namespace std;

int mdays[2][12] = {
  {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},  // 평년
  {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}   // 윤년
};

int isleap(int year) {
  return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int dayof_year(int y, int m, int d){
  if (m < 1 || m > 12) return -1; // 잘못된 월 입력
  if (d < 1 || d > mdays[isleap(y)][m-1]) return -1; // 잘못된 일 입력

  int *p = mdays[isleap(y)];
  while (--m)
    d += *p++;
  
  return d;
}

int main() {
  int year = 2023;
  int month = 7;
  int day = 31;
  cout << year << "년 " << month << "월 " << day << "일은 그 해의 " << dayof_year(year, month, day) << "번째 날입니다." << endl;
  return 0;
}
