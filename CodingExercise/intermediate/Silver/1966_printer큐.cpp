/*
1) 현재 Queue의 가장 앞에 있는 문서의 '중요도' 확인
2) 나머지 문서들 중 현재 문서보다 중요도가 높은 문서가 하나라도 있으면,
이 문서를 인쇄하지 않고 Queue 가장 뒤에 재배치한다.
예를 들어 Queue에 4개의 문서(A B C D)가 있고, 
중요도가 2 1 4 3 라면 C를 인쇄하고, 다음으로 D를 인쇄하고 A, B를 인쇄하게 된다.
(중요도가 높은 것 먼저 인쇄한다.)
입력:
첫 번째 => 테케 개수 T
두 번째 => 문서의 개수 N, 
몇 번째로 인쇄되었는지 궁금한 문서가 현재 Queue에서 
몇 번째에 놓여 있는지를 나타내는 정수 M (0<= M <N) (인덱스와 유사)
세 번째 => N개의 문서의 중요도가 차례대로 주어짐. (1이상 9 이하)
문서 한 개의 중요도를 imp라 하자.
        if(원소의 크기 순으로 내림차순되었다면)
             처음 인덱스 imp였던 원소의 현재 인덱스를 출력
        else
             q.back(해당원소); 
*/

#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int T;
    cin >> T;  // 테스트 케이스의 수 입력

    while(T > 0){
        queue<pair<int, int>> q; // (중요도, 인덱스)
        priority_queue<int> pq; // 중요도를 내림차순으로 정렬하기 위한 우선순위 큐
        int N, M;
        cin >> N >> M; // 문서의 수와 찾고자 하는 문서의 초기 위치 입력

        for(int i = 0; i < N; i++){
            int imp;
            cin >> imp;
            q.push({imp, i}); // 큐에 (중요도, 인덱스) 형태로 삽입
            pq.push(imp); // 우선순위 큐에 중요도를 삽입
        }

        int printOrder = 0; // 출력 순서를 기록하는 변수

        while(!q.empty()){
            int curImp = q.front().first; // 현재 문서의 중요도
            int curIdx = q.front().second; // 현재 문서의 초기 인덱스
            q.pop();

            // 현재 문서의 중요도가 우선순위 큐의 최상단과 같으면 출력 가능
            if(curImp == pq.top()){
                pq.pop(); // 우선순위 큐에서 제거
                printOrder++; // 출력 순서 증가

                if(curIdx == M){
                    cout << printOrder << endl;
                    break;
                }
            } else {
                // 중요도가 더 높은 문서가 남아있으므로 현재 문서를 큐의 뒤로 이동
                q.push({curImp, curIdx});
            }
        }

        T--;
    }

    return 0;
}
