#include <stdio.h>

/*
Hello keya bokcodi hai
*/

int len(int n) {
    int count = 0;
    while (n != 1) {
        if (n % 2 != 0) {
            n = (3 * n) + 1;
        } else {
            n = n / 2;
        }
        count++;
    }
    return count+1; // Corrected return statement
}

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF) {
        if (a < b) {
            int temp = a;
            a = b;
            b = temp;
        }

        int mx = 0;
        while (a >= b) {
            int num = len(a);
            mx = max(mx, num);
            a--;
        }
        printf("%d\n", mx); // Corrected printf statement
    }

    return 0;
}
