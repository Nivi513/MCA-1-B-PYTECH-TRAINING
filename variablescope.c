#include <stdio.h>

int global = 100; // file scope

void func() {
    static int count = 0;
    int local = 5;      
    count++;
    printf("count = %d, local = %d\n", count, local);
}

int main() {
    for (int i = 0; i < 3; i++) {
        func();
    }
    return 0;
}

