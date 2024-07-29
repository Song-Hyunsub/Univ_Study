/*
첫째줄 : 포켓몬의 개수 N, 내가 맞춰야하는 문제 수 M
둘째줄부터 N개의 줄: 포켓몬 번호가 1번부터 N번까지 한 줄 하나씩 입력

마지막은 대소문자 모두 가능, 최대길이 20, 최소길이 2
 포켓몬 이름 조건) 영어로만, 첫글자 대문자, 중간은 소문자, 
 => 벡터 자료구조 선언 vector<string> name;
그 다음 M개의 줄 : 내가 맞춰야 하는 문제를 입력
 조건) 알파벳으로만 입력할 시, 포켓몬 번호를 출력함
 숫자(1이상 N이하)로만 들어오면, 포켓몬 번호에 해당하는 문자를 출력함
 입력 문자는 반드시 도감에 있는 포켓몬 이름만 주어짐.
=> 이때 map 자료구조를 한 번 선언하여 반복문으로 입력받은 수마다 초기화를 받는다.
map<string, int> poketmon; // 포켓몬 이름과 번호 (해시 구조)
 
*/

#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;
int main(){
  // 변수 초기화
  int N, M;
  cin >> N >> M;
  string tmp; // 이름만을 넣어줄 변수 tmp
  vector<string> name;
  map<string, int> poketmon;
  vector<string> res;    // 결과 벡터
  for(int i=0; i<N; i++){
    cin >> tmp;
    name.push_back(tmp); // 도감 번호 => name
    poketmon.insert(make_pair(tmp, i+1)); 
      // map(포켓몬)에 두 변수를 넣기 위해, make_pair를 사용하여 도감 이름에 대응하는 도감 번호 넣기
  }
  for(int j=0; j<M; j++){
    cin >> tmp;
    if (tmp[0] >= 65 && tmp[0] <= 90){
      res.push_back(to_string(poketmon[tmp]));  // 번호를 받아 string 변환
    }
    else{  // 도감번호 i가 주어질 때
      // 정수형 변환, 인덱스 맞추어 1 감소 후, name으로 대응하기
      res.push_back(name[stoi(tmp)-1]);  
    }
  }
  for (int i = 0; i < res.size();i++){
        cout << res[i] << '\n'; // 출력
  }
  return 0;
}
