#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T, n;
    cin >> T;

    // 최대 n이 40이므로 미리 계산해둠
    vector<int> count_zeros(41, 0);
    vector<int> count_ones(41, 0);

    count_zeros[0] = 1;
    count_zeros[0] = 0;
    count_zeros[1] = 0;
    count_ones[1] = 1;

    for (int i = 2; i <= 40; ++i) {
        count_zeros[i] = count_zeros[i - 1] + count_zeros[i - 2];
        count_ones[i] = count_ones[i - 1] + count_ones[i - 2];
    }
    
    while (T--) {
        cin >> n;
        cout << count_zeros[n] << ' ' << count_ones[n] << endl;
    }
    
    return 0;
}
