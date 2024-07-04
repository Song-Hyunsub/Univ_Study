
// [Solution 1] EOF 입력 이용하기
#include <iostream>
#include <string>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int num=0;
    while(true){
        string s;
        cin >> s;
        if(cin.eof()) break; 
        num++;
    }
    cout << num;
    return 0;
}


/* [Solution 2] getline 입력 이용하기
#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	int res = 1;
	getline(cin, s);
	if (s.length() == 1 && s[0] == ' ') {
		cout << 0;
		return 0;
	}
	for (int i = 1; i < s.length() - 1; i++) {
		if (s[i] == ' ') res++;
	}
	cout << res;
	return 0;
}
*/
