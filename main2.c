//
// Created by wtdbill on 2021/5/24.
//

#include <stdio.h>

void test() {
    int a = 0xaabbccdd;
    int *p1 = &a;
    char *p2 = &a;

    printf("%p\n", *p1);
    printf("%p\n", *p2);

    printf("p1 = %p\n", p1);
    printf("p1 = %p\n", p2);

    printf("p1 = %p\n", p1 + 1);
    printf("p1 = %p\n", p2 + 1);
}

int main() {

    test();
    return 0;
}

