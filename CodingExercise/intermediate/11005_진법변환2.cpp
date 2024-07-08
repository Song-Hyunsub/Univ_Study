#include <iostream>
#include <string>
using namespace std;
int main(){
    int num1, num2;
    int B;
    cin >> num1>> B;
    int onum = num1;
    int len = 0;
    while (onum > 0){
        onum /= B;
        len++;
    }
    string str(len, '0');
    
    // 각 자리의 값을 처리
    for(int i = len-1; i >= 0;i--){
        

        // B로 계속 나누면서 digit을 확인
        num2 = num1 % B;
        num1 = num1 / B;
        if(num2 > 9)
            str[i] = num2 - 10 + 'A';
        else
            str[i] = num2 + '0';
    }

    cout << str << endl;
    return 0;
}
