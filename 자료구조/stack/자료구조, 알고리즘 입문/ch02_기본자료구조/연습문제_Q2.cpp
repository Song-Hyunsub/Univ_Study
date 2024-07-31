#include <iostream>
using namespace std;

int sumof(const int a[], int n){
  int sum = a[0];
  for(int i=1; i<n; i++)
    sum += a[i];
  return sum;
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
  cout << "키의 합계는 " << sumof(height, num) << "입니다." << endl;
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
키의 합계는 822입니다.
*/
