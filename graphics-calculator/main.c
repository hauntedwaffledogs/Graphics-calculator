#include <stdio.h>
#include <math.h>

void linear() {
    FILE *fp=NULL;
    fp=fopen("linear.txt","w");
    /*reads information from user input*/
    double x, y;
    printf("enter start value: \n");
    scanf("%lf", &y);
    int points;
    points =0;
    while(points < 2){
        x=x+1;
        y = y+1;
        fprintf(fp,"%lf\t %lf\n",x,y);
        points++;
    }
};

void noise(){
    FILE *fp=NULL;
    fp=fopen("noise.txt","w");
    /*reads information from user input*/
    double x, y;
    printf("enter start value: \n");
    scanf("%lf", &y);
    int points=0;
    while(points <=1000){

        y =sin(y+x*x);
        x =points;

        fprintf(fp,"%lf\t %lf\n",x,y);
        points++;
    }
};


int main() {
    printf("Linear slope:1\n");
    printf("noise generator:2\n");
    int input;
    scanf("%d", &input);


    switch(input) {
        case 1:
        linear();
        break;
        case 2:
        noise();
        break;
    }
};