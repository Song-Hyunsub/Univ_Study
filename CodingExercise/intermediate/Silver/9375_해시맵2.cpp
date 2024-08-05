#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

int main() {
    int t; // 테스트 케이스의 수
    cin >> t;
    
    while (t--) {
        int n; // 의상의 수
        cin >> n;
        
        unordered_map<string, int> clothes; // 의상의 종류별 개수를 저장하는 맵
        
        for (int i = 0; i < n; ++i) {
            string name, type;
            cin >> name >> type;
            clothes[type]++;
        }
        
        int combinations = 1;
        
        for (auto& item : clothes) {
            // 각 의상 종류마다 해당 종류의 옷을 입지 않는 경우를 포함하여 (count + 1) 곱함
            combinations *= (item.second + 1);
        }
        
        // 아무것도 입지 않는 경우를 뺌
        combinations -= 1;
        
        cout << combinations << endl;
    }
    
    return 0;
}
