//
// Created by wtdbill on 2021/5/26.
//


#include <stdio.h>

void test() {
    int c[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p = c;

    printf("%d\n", *(c + 1));
    printf("%p\n", c);

    for (int i = 0; i < 9; ++i) {
        //printf("%d \n",*(c+i));
        //printf("%d \n",p[i]);
        //printf("%d\n",*(p+i));
        printf("%d\n", c[i]);
    }

}

int main() {
    test();
    return 0;
}