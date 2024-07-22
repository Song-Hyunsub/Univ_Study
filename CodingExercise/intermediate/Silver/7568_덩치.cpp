/*
덩치 등수 구하기
5
순서를 구하되 A, B 두 쌍을 기준으로
=> A1>A2, B1>B2 일때만 A가 B보다 덩치가 크다고 한다.
그 외에는 공동순위

(1) i와 j는 같을 수 없다.
(2) i번째의 왼쪽 원소 < j번째의 왼쪽 원소
&& i번째의 오른쪽 원소 < j번째의 오른쪽 원소

*/

/*
// [Solution 1]
#include <iostream>
#include <vector>
#include <utility>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector<pair<int, int>> people(N);
    for(int i=0; i<N; i++){
        cin >> people[i].first >> people[i].second;
    }
    for(int i=0; i<N; i++){
        int rank = 1;
        for(int j=0; j<N; j++){
            if(i != j && people[i].first < people[j].first && people[i].second < people[j].second){
                rank++;
            }
        }
        cout << rank << " ";
    }
    return 0;
}
*/

// [Solution 2]
#include <iostream>
#include <algorithm>
using namespace std;

class people {
public:
	int weight;      // 몸무게
	int height;      // 키
	int rank;        // 덩치등수
};

int main() {
	people* p = new people[50];   // 각 사람들의 몸무게와 키
	int N;                        // 전체 사람 수

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> p[i].weight >> p[i].height;
	}

	// 등수는 1부터 시작. 자신보다 덩치가 큰 사람이 있으면 등수를 하나씩 낮춰감.
	for (int i = 0; i < N; i++) {
		p[i].rank = 1;
		for (int j = 0; j < N; j++) {
			if (p[i].weight < p[j].weight && p[i].height < p[j].height) {
				p[i].rank++;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		cout << p[i].rank << " ";
	}

	return 0;
}
