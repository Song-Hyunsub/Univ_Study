#include <iostream>
using namespace std;
int main(){
  int height, width;
  cout << "직사각형을 출력합니다." << endl;
  cout << "높이: ";  cin >> height;
  cout << "너비: ";  cin >> width;
  cout << endl;  
  for(int i=0; i<height; i++){
    for(int j=0; j<width; j++){
      cout << "*";
    }
      cout << endl;
  }
}
