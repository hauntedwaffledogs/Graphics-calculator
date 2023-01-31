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
    while(points < 20){
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
    while(points <=1000){
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
    while(points <= 1000){
        y = tan(y);
        x = points;
        fprintf(fp, "%lf\t %lf\n",x,y);
        points++;
    }
};

void circle(){
  FILE *fp=NULL;
  fp=fopen("circle.txt","w");
  double r;
  double x,y,x0,y0;
  printf("Enter the radius of the circle to be plotted: ");
  scanf("%lf",&r);
  printf("Enter the x and y-coordinates of the center: ");
  scanf("%lf%lf",&x0,&y0);
  for(y=y0-r;y<=y0+r;y=y+0.1){
    x=sqrt(r*r-(y-y0)*(y-y0))+x0; 
    fprintf(fp,"%lf\t %lf\n",x,y);
  }
  for(y=y0+r;y>=y0-r;y=y-0.1){
    x=-sqrt(r*r-(y-y0)*(y-y0))+x0; 
    fprintf(fp,"%lf\t %lf\n",x,y);
   
  }
};

int main() {
    printf("Linear slope:1\n");
    printf("noise generator:2\n");
    printf("Circle:3\n");
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
        circle();
        break;
        case 4:
        printf("%d not an option yet\n");
        break;
        case 5:
        test();
        break;
    }
};