#include <iostream>
#include <string>
using namespace std;

int main(){
    int N = 20;
    string sub;
    float mix;
    float sumCredit = 0;
    float sum = 0;
    float credit;
    string grade;

    while(N > 0)
    {
        cin >> sub >> credit >> grade;

        if (grade == "A+") {
            mix = credit * 4.5;
            sum += mix;
            sumCredit += credit;
        }
        else if (grade == "A0") {
            mix = credit * 4.0;
            sum += mix;
            sumCredit += credit;
        }
        else if (grade == "B+") {
            mix = credit * 3.5;
            sum += mix;
            sumCredit += credit;
        }
        else if (grade == "B0") {
            mix = credit * 3.0;
            sum += mix;
            sumCredit += credit;
        }
        else if (grade == "C+") {
            mix = credit * 2.5;
            sum += mix;
            sumCredit += credit;
        }
        else if (grade == "C0") {
            mix = credit * 2.0;
            sum += mix;
            sumCredit += credit;
        }
        else if (grade == "D+") {
            mix = credit * 1.5;
            sum += mix;
            sumCredit += credit;
        }
        else if (grade == "D0") {
            mix = credit * 1.0;
            sum += mix;
            sumCredit += credit;
        }
        else if (grade == "F") {
            mix = credit * 0.0;
            sum += 0.0;
            sumCredit += credit;
        }
        else if (grade == "P") {
            // "P" 성적은 학점 계산에서 제외
            mix = credit * 0.0;
            sum += 0.0;
        }
        else {
            cout << "Error!";
            return 0;
        }
        N--;
    }

    if (sumCredit > 0) {
        float total = sum / sumCredit;
        cout << total;
    } else {
        cout << "No valid credits to calculate GPA.";
    }

    return 0;
}
