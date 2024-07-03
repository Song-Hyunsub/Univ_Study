/*
각 입력을 42로 나눈 나머지의 서로 다른 값이 몇 개인지 출력하도록 한다.
=> 
N 변수, 벡터(N) 선언
벡터(N)의 요소 입력받기
배열 = 해당 입력%42

set 구조체를 이용한다
*/

// [Solution 1]
#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int N = 10;
    vector<int> v(N);
    for(int i=0; i<N; i++){
        cin >> v[i];
        if(v[i]>1000 || v[i]<0) {
            cout << "Error!";
            return 0;
        }
        v[i] = v[i]%42;
    }
    set<int> u(v.begin(), v.end());
    
    // u에는 중복되지 않은 값들만 들어있습니다.
    // u.size()를 사용하면 서로 다른 값의 개수를 알 수 있습니다.
    int d_count = u.size();
    cout << d_count << endl;
    
    return 0;
}



/* [Solution 2]

#include <iostream>
using namespace std;
 
int main(int argc, const char * argv[]) {
 
	/*
	  0으로 초기화를 해주어야 한다.
	  bool 배열을 활용 할 경우 bool count[42] = {false} 이런식으로
	  초기화 해줄 수 있다.
	 */
	int count[42] = {};	
	
	int v;
	for(int i = 0; i < 10; i++) {
		cin >> v;
		// 입력 받은 수를 42로 나눈 나머지 인덱스의 값을 증가시킨다.
		count[v % 42]++;	
	}
 
	int result = 0;
	/*
	  배열을 순회하면서 적어도 한 번 이상 나온 경우에는
	  result 값을 증가시킨다. (서로 다른 수를 세기 위함)
	 */
	for(int v : count) {
		if(v > 0) {		
			result++;
		}
	}
	cout << result;
	return 0;
}

*/
