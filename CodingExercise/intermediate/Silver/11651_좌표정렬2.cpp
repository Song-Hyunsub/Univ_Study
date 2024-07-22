/*
coor => int x, int y, int 
y좌표 오름차순 우선
=> 차후 x좌표 오름차순
*/

// [Solution 1]
#include <iostream>
#include <algorithm>
using namespace std;
class coor{
public:
    int x;
    int y;
};
bool compare(coor& a, coor& b){
    if(a.y == b.y){
        return a.x < b.x;
    }
    return a.y < b.y;
}
int main(){
    int N;
    cin >> N;
    int i, j;
    coor* c = new coor[N];
    for(int i=0; i<N; i++){
        cin >> c[i].x >> c[i].y;
    }
    sort(c, c+N, compare);
    for(int i=0; i<N; i++){
        cout << c[i].x << ' ' << c[i].y << "\n";
    }
    delete[] c;
    return 0;
}

/* [Solution 2]
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
    vector<pair<int, int>> v;
    int n, a, b;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        v.push_back(pair<int, int>(b, a));
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        cout << v[i].second << ' ' << v[i].first << "\n";
    }
}
*/
