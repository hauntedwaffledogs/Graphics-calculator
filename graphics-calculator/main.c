#include <stdio.h>
#include <math.h>
#include "math-function.c"

int main() {
    printf("Linear slope:1\n");
    printf("noise generator:2\n");
    printf("Circle:3\n");
    printf("Lissajous Figure:4 (you can't input anything for this unless you look in the function)\n");
    printf("holter:5\n");
    printf("test:6\n");
    int input;
    scanf("%d", &input);
    switch(input) {
        case 1:
        linear();
        break;
        case 2:
        noise();
        break;
        case 3:
        circle();
        break;
        case 4:
        LissajousFigure();
        break;
        case 5:
        holter();
        break;
        case 6:
        test();
        break;
    }
};