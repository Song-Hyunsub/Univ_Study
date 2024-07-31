// 한 해의 지난 날 수를 구하여 출력
#include <iostream>
using namespace std;

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

// y년 m월 d일의 그 해 지난 날 수를 구함
int dayof_year(int y, int m, int d){
  int days = d;  // 날 수
  for(int i=1; i<m; i++){
    days += mdays[isleap(y)][i-1];  
  }
  return days;
}

int main(){
  int retry;  // 다시?
  do{
    int year, month, day;
    cout << "년: ";  cin >> year;
    cout << "월: ";  cin >> month;
    cout << "일: ";  cin >> day;
    cout << year << "년의 " << dayof_year(year, month, day) << "일째입니다." << endl;
    cout << "다시 할까요?(1 ... 예/0 ... 아니오): ";
    cin >> retry;
  } while(retry==1);
  return 0;
}

/*
년: 2024 
월: 7
일: 24
2024년의 206일째입니다.
다시 할까요?(1 ... 예/0 ... 아니오): 0
*/
