//
// Created by wtdbill on 2021/6/1.
//

#include <stdio.h>

int main(){
    int a= 10;
    int b = 20;
    int c = 30;

    int *p1[4] = {1,2,4,5};

    int (*p2)[3] = {&a,&b,&c};

    printf("%d",*(p1+2));
    printf("%d",*p2);
}