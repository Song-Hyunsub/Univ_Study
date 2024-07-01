#include <iostream>
using namespace std;
/*
(1) 같은 눈 3개 => 10000 + 같은 눈 * 1000
(2) 같은 눈 2개 => 1000 + 같은 눈 * 100
(3) 모두 다른 눈 => (가장 큰 눈) * 100
*/
int max(int a, int b, int c)
{
    if ((a>=b && b>=c)||(a>=c && c>=b)) return a;
    else if((b>=c && c>=a)||(b>=a && a>=c)) return b;
    else return c;
}

int main() {
    int num1, num2, num3, reward;
    cin >> num1 >> num2 >> num3;
    if((num1 == num2) && (num2 == num3)) reward = 10000 + num1 * 1000;
    else if(((num1==num2)&&(num1!=num3))||((num1==num3)&&(num1!=num2))) reward = 1000 + num1 * 100;
    else if((num2==num3)&&(num2!=num1)) reward = 1000 + num2 * 100;
    else reward = max(num1, num2, num3) * 100;
    cout << reward;
    return 0;
}
