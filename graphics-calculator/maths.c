#include<stdio.h>
#include<math.h>
#include<stdlib.h>

main(){
    FILE *fp=NULL;
    fp=fopen("plot.txt","w");
    /*reads information from user input*/
    double x,y,x0,y0;
    printf("enter start value and slope");
    scanf("%lf%lf",&x0,&y0);


    for(x=x0; x <= x0+100; x=x+x0){
        y=tan(x)/x0*y0;
        fprintf(fp, "%lf\t%lf\n",x,y);
    }
    return 0;

}