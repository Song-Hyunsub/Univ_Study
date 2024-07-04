/*
N개의 숫자가 공백 없이 쓰여진다. 이 숫자를 모두 합해서 출력하는 프로그램
(1<=N<=100)
isdigit(ch) => ch가 0~9인 숫자이면 1, 아니면 0을 반환하는 함수
*/

// [Solution 1]
#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;
    int sum = 0;
    cin >> N;
    if(N>=1 && N<=100){
        string s;
        cin >> s;
        for(char ch : s){
            if(isdigit(ch)){
                sum += ch - '0';
            } else {
                cout << "Error!";
                return 0;
            }
        }
        cout << sum;
    } else cout << "Error!";
    return 0;
}

/*
[Solution 2]
#include <iostream>
using namespace std;
 
int main()
{
    int n; // 숫자의 갯수
    char ch;
    cin >> n;
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ch;
        total += ch - 48;  // char형으로 받았으므로, 아스키코드 '0'의 값, 48을 빼줌
    }
    cout << total << endl;
    return 0;
}

 */
