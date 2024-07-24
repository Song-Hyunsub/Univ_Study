/*
M이상 N이하의 소수를 모두 출력해라!
소수란? => 1과 자기 자신만을 약수로 갖는 수
- 소수인지 아닌지 판별을 M부터 N까지 반복한다.
 - 소수 판별 : 1로 나눴을때는 모든 수이므로 2로 먼저 나눈다.
  - 2로 먼저 나눴는데 0이 되면 1이라는 뜻 => 소수 X
  - j는 2부터 N을 거쳐서 M까지 순회하며 i를 나누고
  그의 몫과 나머지를 비교하는 과정을 거친다.
  => j가 2~(i-1)까지는 i%j!=0이 된다.
  => j가 i부터 M까지는 i/j==0이 된다.
  
  에라토스테네스의 체를 이용한다.
  => 원하는 범위 내의 모든 수를 포함하는 배열을 만든 후, 각 요소를 "소수"라고 가정하여 초기화합니다. 
  예를 들어, 0부터 N까지의 수가 있다면, 배열의 각 요소를 true로 설정합니다.
  배열에서 가장 작은 소수 2부터 시작하여 그 배수들을 모두 "소수가 아님"으로 표시합니다.
배열에서 다음으로 소수로 남아있는 수를 찾아 그 배수들을 "소수가 아님"으로 표시합니다.
이 과정을 N의 제곱근까지 반복합니다. 제곱근 이상에서는 배수들이 이미 이전 단계에서 처리되었기 때문입니다.
배열에서 true로 남아있는 모든 수가 소수입니다.

*/

/* [시간 초과되는 코드!]
#include <iostream>
using namespace std;
int main(){
    int M, N;
    cin >> M; cin >> N;
    for(int i=M; i<N+1; i++){
        int count = 0;
        if(i/2==0) {count++; continue; }
        for(int j=2; j<=M && j!=i; j++){
            
            if(i%j!=0 || i/j==0){
                continue;
            } else count++;
        }
        if(count == 0){
            cout << i << "\n";
        }
    }
    return 0;
}
*/

// [Solution] bool형의 vector를 활용한다 (에라토스테네스의 체)
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int M, N;
    cin >> M >> N;
    // 1단계: 0부터 N까지 원소의 boolean 벡터 선언 (모두 true로 초기화)
    vector<bool> is_prime(N+1, true);
    is_prime[0] = is_prime[1] = false;  // 0과 1은 소수가 아님
    // 2단계: 에라토스테네스의 체를 사용하여 N 이하의 소수가 아닌 수를 표시
    for(int p=2; p*p <= N; p++) {
        // is_prime[p]가 true이면, p는 소수이다.
        if(is_prime[p] == true) {
            // p의 배수들을 소수가 아니라고 표시한다.
            for(int i=p*p; i<=N; i+=p)
                is_prime[i] = false;
        }
    }
    // M에서 N까지의 소수를 출력합니다.
    for (int i = M; i <= N; i++) {
        if (is_prime[i])
            cout << i << "\n";
    }
}
