#include<stdio.h>
#include<math.h>
main(){
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
}