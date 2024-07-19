/* [Solution 1]

#include <iostream>
#include <set>
using namespace std;

int A[100001] = {0};
int B[100001] = {0};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N;    // N 입력 받기
    set<int> A_set; // A의 원소를 저장할 set
    for(int i = 0; i < N; i++){
        cin >> A[i];    // N개의 정수 A[0], ... A[N-1] 입력 받기
        A_set.insert(A[i]);
    }
    cin >> M;    // M 입력 받기
    for(int i = 0; i < M; i++){
        cin >> B[i];    // M개의 수를 B[]에 입력 받기
    }

    // B[]의 원소들이 A의 원소에 포함되는지 각각 조사하기
    for(int i = 0; i < M; i++){
        if(A_set.find(B[i]) != A_set.end()) {
            cout << "1\n";
        } else {
            cout << "0\n";
        }
    }
    return 0;
}

*/

// [Solution 2]
#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int N, M;
int n;
int arr[100000];

int solve(int n) {
	int start = 0;
	int end = N-1;
	while (start <= end) {	
		int mid = (start + end) / 2;
		if (arr[mid] == n) return 1;
		else if (n < arr[mid]) end = mid - 1;
		else start = mid + 1;
	}
	return 0;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + N);
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> n;
		cout << solve(n) << "\n";
	}
}
