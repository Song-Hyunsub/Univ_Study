/*
int num, count = 0;
int curNum = 666;    // 종말의 수의 제일 첫 번째 수
cin >> num;
while(1){
      string str = to_string(curNum);    // curNum을 문자열로 형변환한 것을 str에 저장
      if(str.find("666")!=string::npos){    // str에 666 포함 시 순번 1 증가
          count++
          if(count == num){
              result = curNum;
              break;
          }
          curNum++;
      }
}
cout << result << endl;
return 0;
*/

#include <iostream>
#include <string>
using namespace std;
int main(){
    int num, count = 0, result;
    int curNum = 666;    // 종말의 수의 제일 첫 번째 수
    cin >> num;
    
    while(1){
        // curNum을 문자열로 형변환한 것을 str에 저장
        // while문 안에 있어야 curNum이 증가할 때마다 새로운 문자열 계속 반환함
        string str = to_string(curNum);    
        
        if(str.find("666")!=string::npos){    // 에 666 포함 시 순번 1 증가
            count++;
            if(count == num){       // 순번이 입력받은 수 num과 같으면
                result = curNum;    // result에 해당 순번의 curNum을 저장하고 탈출
                break;
            }
        }
        curNum++;    // 반복문 1턴이 끝나기 직전마다 curNum에 1씩 증가
    }
    cout << result << endl;
    return 0;
}
