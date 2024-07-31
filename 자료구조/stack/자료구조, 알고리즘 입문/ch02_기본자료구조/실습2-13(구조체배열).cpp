// 신체검사 데이터용 구조체 배열
#include <iostream>
#include <iomanip>  // setw, setprecision 등을 사용하기 위해 필요
#define VMAX 21  // 시력의 최댓값 2.1 * 10
using namespace std;

typedef struct {
  char name[20];
  int height;
  double vision;
} PhysCheck;

// 키의 평균값
double ave_height(const PhysCheck dat[], int n){
  double sum = 0;
  for(int i = 0; i < n; i++){
    sum += dat[i].height;
  }
  return sum / n;
}

// 시력 분포
void dist_vision(const PhysCheck dat[], int n, int dist[]){
  for(int i = 0; i < VMAX; i++){
    dist[i] = 0;
  }
  for(int i = 0; i < n; i++){
    if(dat[i].vision >= 0.0 && dat[i].vision <= VMAX / 10.0)
      dist[(int)(dat[i].vision * 10)]++;
  }
}

int main() 
{
  PhysCheck x[] = {
    { "박현규", 162, 0.3 },
    { "함진아", 173, 0.7 },
    { "최윤미", 175, 2.0 },
    { "홍연의", 171, 1.5 },
    { "이수진", 168, 0.4 },
    { "김영준", 174, 1.2 },
    { "박용규", 169, 0.8 }
  };
  int nx = sizeof(x) / sizeof(x[0]);
  int vdist[VMAX];
  
  cout << "■ □ ■ 신체검사표 ■ □ ■" << endl;
  cout << "이름            키   시력" << endl;
  cout << "------------------------" << endl;
  for(int i = 0; i < nx; i++){
    cout << left << setw(18) << x[i].name
         << right << setw(4) << x[i].height
         << fixed << setprecision(1) << setw(5) << x[i].vision
         << endl;
  }
  
  cout << "\n평균 키: " << fixed << setprecision(1) << setw(5) << ave_height(x, nx) << endl;

  dist_vision(x, nx, vdist);
  cout << "\n시력 분포" << endl;
  for(int i = 0; i < VMAX; i++){
    cout << fixed << setprecision(1) << setw(3) << i / 10.0 << " ~: "
         << right << setw(2) << vdist[i] << " 명" << endl;
  }
  
  return 0;
}


/*
■ □ ■ 신체검사표 ■ □ ■
이름            키   시력
------------------------
박현규          162  0.3
함진아          173  0.7
최윤미          175  2.0
홍연의          171  1.5
이수진          168  0.4
김영준          174  1.2
박용규          169  0.8

평균 키: 170.3

시력 분포
0.0 ~:  0 명
0.1 ~:  0 명
0.2 ~:  0 명
0.3 ~:  1 명
0.4 ~:  1 명
0.5 ~:  0 명
0.6 ~:  0 명
0.7 ~:  1 명
0.8 ~:  1 명
0.9 ~:  0 명
1.0 ~:  0 명
1.1 ~:  0 명
1.2 ~:  1 명
1.3 ~:  0 명
1.4 ~:  0 명
1.5 ~:  1 명
1.6 ~:  0 명
1.7 ~:  0 명
1.8 ~:  0 명
1.9 ~:  0 명
2.0 ~:  1 명
*/
