//
// Created by wtdbill on 2021/5/25.
//

#include <stdio.h>

void test() {
    int a = 10;
    int b = 20;
    int c = 30;
    int *p1 = &a;
    int *p2 = &b;
    int *p3 = &c;
    int *arr[3] = {p1, p2, p3};
    int m[3] = {a,b,c};
    int *p = &a;

    printf("%p\n", m);
    printf("%d\n", *m);

    printf("%d\n", *(m+1));
    printf("%d\n", *arr[0]);
    printf("%d\n", **arr);
    printf("%p\n", *arr);
    char *aa = arr;
    printf("%p\n", *(int *) aa);
}

int main() {
    test();
    return 0;
}