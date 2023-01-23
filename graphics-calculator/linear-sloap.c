#include<stdio.h>
#include<math.h>
main(){
    FILE *fp=NULL;
    fp=fopen("plot.txt","w");
    /*reads information from user input*/
    double s;
    double x, y;
    int Time; /*For the X value*/
    printf("enter start value: \n");
    scanf("%lf",&y);
    printf("enter slope value: \n");
    scanf("%lf", &s);
    x=0;
    for(Time=300; Time--;){
        y = s + y +300;
        x = x+2;
        fprintf(fp, "%lf\t%lf\n",x,y);
    }
}