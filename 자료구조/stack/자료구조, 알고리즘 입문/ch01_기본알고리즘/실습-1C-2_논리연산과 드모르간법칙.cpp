#include <iostream>
using namespace std;
int main(){
  int no;
  cout << "2자리 양수를 입력하세요." << endl;
  do {
    cout <<"수는: ";
    cin >> no;
  } while(no < 10 || no > 99);
  cout << "변수 no값은 " << no << "이/가 되었습니다." << endl;
  return 0;
}
