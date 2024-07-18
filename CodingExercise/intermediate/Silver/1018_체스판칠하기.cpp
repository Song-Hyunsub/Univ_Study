#include <iostream>
using namespace std;
string WB[8] = {        // WB 순서의 8*8 배열을 문자열로 선언
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW"
};
string BW[8] = {        // BW 순서의 8*8 배열을 문자열로 선언
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB"
};
string board[50];
// 보드의 (x, y) 위치에서 시작하는 8x8 영역을 
// WB 패턴과 비교하여 다른 문자의 개수를 센 후 반환
int WB_cnt(int x, int y){
    int cnt=0;
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(board[x+i][y+j] != WB[i][j])
                cnt++;
        }
    }
    return cnt;
}
// 보드의 (x, y) 위치에서 시작하는 8x8 영역을 
// BW 패턴과 비교하여 다른 문자의 개수를 센 후 반환
int BW_cnt(int x, int y){
    int cnt=0;
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(board[x+i][y+j] != BW[i][j])
                cnt++;
        }
    }
    return cnt;
}

/*
(1) pair<int, int> p1를 사용하여 보드의 크기를 입력는다.
(2) 보드를 입력받아 board 배열에 저장
(3) 이중 for문을 통해 보드의 모든 가능한 8x8 영역을 검사
(4) 각 8x8 영역에 대해 WB_cnt와 BW_cnt 함수를 호출하여 
해당 영역을 두 가지 패턴으로 바꾸는 데 필요한 최소 변환 횟수를 계산
(5) 최소 변환 횟수를 min_val에 저장합니다.
(6) 최소 변환 횟수를 출력
*/
int main() {
    int min_val = 12345;
    pair<int, int> p1;
    cin >> p1.first >> p1.second;
    for(int i = 0; i < p1.first; i++)
        cin >> board[i];
    for(int i = 0; i + 8 <= p1.first; i++)
    {
        for(int j = 0; j + 8 <= p1.second; j++)
        {
            int tmp;
            tmp = min(WB_cnt(i,j),BW_cnt(i,j));
            if(tmp < min_val) {
                min_val = tmp;
            }
        }
    }
    cout << min_val;
    return 0;
}
