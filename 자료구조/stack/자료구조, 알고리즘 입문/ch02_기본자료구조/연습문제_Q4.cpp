#include <iostream>
using namespace std;

int maxof(const int a[], int n){
  int max = a[0];
  for(int i=1; i<n; i++)
    if(a[i]>max) max = a[i];
  return max;
}

int main(){
  srand(time(NULL));  // 시간으로 난수의 seed(씨앗)을 초기화
  int num = 5 + rand() % 16;  // 사람 수도 난수(5~20)로 생성함
  cout << "사람 수: ";
  int* height = new int[num];

  for(int i=0; i<num; i++){
    height[i] = 100 + rand() % 90;  // 100~189의 난수를 생성, 대입
    cout << "height[" << i << "] = " << height[i] << endl;
  }
  cout << "최댓값은 " << maxof(height, num) << "입니다." << endl;
  delete[] height;
  return 0;
}

/*
사람 수: 8
height[0] = 154
height[1] = 109
height[2] = 184
height[3] = 177
height[4] = 149
height[5] = 180
height[6] = 135
height[7] = 137
최댓값은 184입니다.
*/
