#include <iostream>
#include <vector>
#include <stack>
#include <cstdio>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    vector<int> sequence(n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &sequence[i]);
    }

    stack<int> stack;
    vector<char> operations;
    int current_number = 1;

    for (int i = 0; i < n; ++i) {
        int target = sequence[i];

        // Push numbers onto the stack until we reach the target number
        while (current_number <= target) {
            stack.push(current_number);
            operations.push_back('+');
            ++current_number;
        }

        // If the top of the stack is the target number, pop it
        if (!stack.empty() && stack.top() == target) {
            stack.pop();
            operations.push_back('-');
        } else {
            // If we cannot match the target number, print "NO" and exit
            printf("NO\n");
            return 0;
        }
    }

    // Output the operations
    for (char op : operations) {
        printf("%c\n", op);
    }

    return 0;
}
