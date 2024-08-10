#include <iostream>
#include <queue>
using namespace std;
// greater를 사용하여 최소 힙(Min-Heap) 구조로 변경 => 가장 작은 값이 top에 위치
priority_queue <int, vector <int>, greater <int>> q;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, num;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num;
		if (num != 0) {
			q.push(num);
		}
		else {
			if (q.empty()) {
				cout << 0 << "\n";
			}
			else {
				cout << q.top() << "\n";
				q.pop();
			}
		}
	}
	return 0;
}
