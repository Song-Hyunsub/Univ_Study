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
  cout << num << " 명의 키를 입력하세요." << endl;
  for(int i=0; i<num; i++){
    cout << "height[" << i << "]: ";
    cin >> height[i];
  }
  cout << "최댓값은 " << maxof(height, number) << "입니다." << endl;
  delete[] height;
  return 0;
}

/*
사람 수: 5
5 명의 키를 입력하세요.
height[0]: 172
height[1]: 153
height[2]: 192
height[3]: 140
height[4]: 165
최댓값은 192입니다.
*/
