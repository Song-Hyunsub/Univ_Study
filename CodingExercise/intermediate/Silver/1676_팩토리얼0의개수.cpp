/*
1 2 3 4 [5] 6 7 8 9 [10]
11 12 13 14 [15] 16 17 18 19 [20]
5의 배수가 등장할 때마다 count가 1씩 증가하는 것을 이용!
5,10,15,20,30,35,40, 45, ... => N/5가 0의 개수가 됨
25, 50, 75, ... => N/5 + N/25가 0의 개수가 됨.
for(int i=5; N/i >= 1; i *= 5){
    count += N/i;
}
*/

/* [Overflow가 발생하는 코드!]
#include <iostream>
using namespace std;
long long fact(int n){
    long long mul=1;
    for(int i=n; i>0; i--){
        mul *= i;
    }
    return mul;
}
int main(){
    int N, count = 0;
    cin >> N;
    long long m = fact(N);
    while(m>0){
        if(m%10==0){
            count++;
        } else break;
        m/=10;
    }
    cout << count << endl;
}
*/
#include <iostream>
using namespace std;
int main(){
    int N, count = 0;
    cin >> N;
    for(int i=5; N/i >= 1; i *= 5){
        count += N/i;
    }
    cout << count << endl;
}
