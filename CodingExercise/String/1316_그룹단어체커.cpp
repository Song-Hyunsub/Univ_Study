/*
(1) 테스트케이스의 개수 N을 정의하고, 입력받기
(2) 그룹 단어 로직 이해하기!
=> 같은 문자열끼리는 서로 붙어있어야함!
=> aaabbbbcc => 달라지는 구간이 두 번 뿐이다!
=> aababbbcc => 달라지는 구간이 무려 4번이 생긴다!

*/

/* [Solution 1]
#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, c = 0;
    cin >> N; // (1) 테스트 케이스 개수 N을 입력받음

    for (int i = 0; i < N; i++) { // (2) 문자열을 N번 입력받는다.
        string s;
        cin >> s;

        bool seen[256] = { false }; // ASCII 문자의 출현 여부를 저장하는 배열
        char prev = '\0'; // 이전 문자를 저장하는 변수
        bool isGroup = true; // 그룹 단어 여부를 저장하는 변수

        for (char c : s) {
            if (c != prev) { // 이전 문자와 다르면
                // 이전에 등장했던 문자인지 확인하는 부분
                if (seen[static_cast<unsigned char>(c)]) {
                    isGroup = false;
                    break;
                }
                seen[static_cast<unsigned char>(c)] = true; // 새로운 문자로 기록
            }
            prev = c; // 현재 문자를 이전 문자로 갱신
        }

        if (isGroup) {
            c++;
        }
    }

    cout << c;
    return 0;
}
*/

/* [Solution 2]
#include <iostream>
using namespace std;

int main() { 
	int N;                                // 입력받을 단어의 개수
	string word;                          // 입력받은 단어
	int count = 0;                        // 그룹 단어가 아니라면 카운트

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> word;
        
		// 단어에서 알파벳 문자의 출현유무를 나타내는 배열 (출현없으면 false)
		bool alphabet[26] = { false, };        
		alphabet[(int)(word[0]) - 97] = true;  // 첫번째 단어값을 true로 설정

		for (int i = 1; i < word.size(); i++) {
        
			// 1. i번째 문자가 i-1번째 문자와 같으면 연속이므로 넘어간다.
			if (word[i] == word[i - 1]) {
				continue;
			}
            
			// 2. i번째 문자가 i-1번째 문자와 같지 않고, (연속하지 않고)
			//    해당 배열값이 true라면 (이미 나왔던 문자라면)
			else if(word[i] != word[i - 1] 
            		&& alphabet[(int)(word[i]) - 97] == true){
				count++;	// 그룹단어가 아니므로 카운트
				break;
			}
            
			// 3. 위의 두 경우에 해당하지 않는 경우
			//    처음 등장한 문자인 경우
			else {
				alphabet[(int)(word[i]) - 97] = true;
			}
		}
	}

	// 그룹 단어의 개수 = 전체단어의 개수 - 그룹단어가 아닌 단어의 개수
	cout << N - count;

	return 0;
}
*/

// [Solution 3]
#include <iostream>
#include <string>
using namespace std;

int main() {

	int t;
	cin >> t;

	string str;
	int count = 0;

	for (int i = 0; i < t; i++) {
		cin >> str;

		if (str.length() <= 2) {
			continue;
		}
		else {
			for (int j = 0; j < str.length() - 1; j++) {
				if (str[j] != str[j + 1]) {
					if (str.find(str[j], j + 2) != string::npos) {
						count++;
						break;
					}
				}
			}
		}
	}
	cout << t - count;
}
