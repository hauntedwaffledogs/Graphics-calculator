#include <stdio.h>
#include <math.h>

void linear() {
    FILE *fp=NULL;
    fp=fopen("linear.txt","w");
    /*reads information from user input*/
    double x, y;
    double m;
    printf("enter start value: \n");
    scanf("%lf", &x);

    int points;
    points =0;
    while(points < 2){
        m = 5;
        y = m*x+2;
        x = points;
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
    while(points <=10){

        y =sin(y+x*x);
        x =points;

        fprintf(fp,"%lf\t %lf\n",x,y);
        points++;
    }
};

void test(){
    FILE *fp=NULL;
    fp=fopen("test.txt","w");
    /*reads information from user input*/
    double x, y;
    printf("enter start value: \n");
    scanf("%lf", &y);
    int points=0;
    while(points <= 2){
        y = tan(y);
        x = points;
        fprintf(fp, "%lf\t %lf\n",x,y);
        points++;
        
    }
};

int main() {
    printf("Linear slope:1\n");
    printf("noise generator:2\n");
    printf("nothing here yet:3\n");
    printf("nothing here yet:4\n");
    printf("testing:5\n");
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
        printf("%d not an option yet\n");
        break;
        case 4:
        printf("%d not an option yet\n");
        break;
        case 5:
        test();
        break;
    }
};