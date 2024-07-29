#include <iostream>
using namespace std;
int main(void){
    int a, b, c;
    cout << "세 정수의 최댓값을 구합니다.\n" << endl;
    cout << "a값: ";    cin >> a;
    cout << "b값: ";    cin >> b;
    cout << "c값: ";    cin >> c;

    int max = a;
    if(b > max)  max = b;
    if(c > max)  max = c;

    cout << "최댓값은 " << max << "입니다." << endl;
    return 0;
}
