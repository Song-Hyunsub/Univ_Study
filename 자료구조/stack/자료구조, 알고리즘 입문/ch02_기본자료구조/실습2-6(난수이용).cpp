#include <iostream>
using namespace std;

int maxof(const int a[], int n){
  int max = a[0];
  for(int i=1; i<n; i++)
    if(a[i]>max) max = a[i];
  return max;
}

int main(){
  int num;
  cout << "사람 수: ";
  cin >> num;
  int* height = new int[num];
  srand(time(NULL));  // 시간으로 난수의 seed(씨앗)을 초기화
  for(int i=0; i<num; i++){
    height[i] = 100 + rand() % 90;  // 100~189의 난수를 생성, 대입
    cout << "height[" << i << "] = " << height[i] << endl;
  }
  cout << "최댓값은 " << maxof(height, num) << "입니다." << endl;
  delete[] height;
  return 0;
}

/*
사람 수: 5
height[0] = 173
height[1] = 154
height[2] = 133
height[3] = 171
height[4] = 137
최댓값은 173입니다.
*/
