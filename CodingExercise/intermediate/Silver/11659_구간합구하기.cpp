#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M;
    cin >> N >> M;
    vector<int> num(N+1, 0);
    vector<int> prefix_sum(N+1, 0);
    for(int i=1; i<=N; i++){
        cin >> num[i];
        prefix_sum[i] = prefix_sum[i-1] + num[i];
    }
    for(int k=0; k<M; k++){
        int ir, jr;
        cin >> ir >> jr;
        cout << prefix_sum[jr] - prefix_sum[ir-1] << "\n";
    }
    return 0;
}
