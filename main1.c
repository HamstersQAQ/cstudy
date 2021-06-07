//
// Created by wtdbill on 2021/5/18.
//

#include <stdio.h>

void test01(){
    int *p = NULL;
    int a = 10;
    p = &a;
    int *m = &a;
    printf("--------- %p\n",&a);
    printf("--------- %p\n",p);
    printf("--------- %p\n",&p);
    printf("--------- %d\n",*m);
    printf("--------- %p\n",m);
    printf("--------- %d\n",*p);

}

int main(){
    test01();
}