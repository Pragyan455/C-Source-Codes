#include <stdio.h>
#include <stdlib.h>

typedef double vec2df[2];
typedef struct {
    double data[2];
} vec2d;

void functionVec2df(vec2df );
void functionVec2d(vec2d );

int main()
{
    vec2df a={5,10};
    vec2d b={10,5};

    printf("Size of first variable is %d\n", sizeof(a));
    printf("Size of second variable is %d\n", sizeof(b));

    functionVec2df(a);
    functionVec2d(b);

    return 0;
}

void functionVec2df(vec2df a) {
    printf("Size of first variable is %d\n", sizeof(a));
}

void functionVec2d(vec2d b) {
    printf("Size of second variable is %d\n", sizeof(b));
}