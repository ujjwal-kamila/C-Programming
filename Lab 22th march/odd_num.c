#include <stdio.h>
//C program to print odd numbers between 1-100 using continue statement & loop

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}