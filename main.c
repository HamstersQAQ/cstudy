#include <stdio.h>
#include <malloc.h>

typedef struct {
    int a;
    int b;
}Person1;
int main() {
    Person1 *person1 = malloc(sizeof(Person1));
    person1->a = 22;
    person1->b = 44;
    printf("Hello, World!  %d\n",person1->a);
    printf("Hello, World!  %d\n",person1->b);
    return 0;
}
