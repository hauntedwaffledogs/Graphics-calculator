#include <stdio.h>
#include <math.h>

void linear() {
    FILE *fp=NULL;
    fp=fopen("FILE.txt","w");
    /*reads information from user input*/
    double m;
    printf("enter start value: \n");
    scanf("%lf", &m);
    int x;
    int y;
    while(x < 100){
        y = y+m;
        x++;
        fprintf(fp,"%lf\t %lf\n",x,y);

    }
};

void sinwave(){
    FILE *fp=NULL;
    fp=fopen("FILE.txt","w");
    /*reads information from user input*/
    double x, y;
    printf("enter start value: \n");
    scanf("%lf", &y);
    int points = 0;
    while(points <=200){
        y =sin(x)+y;
        x = x +2;
        fprintf(fp,"%lf\t %lf\n",x,y);
        points++;
    }
};

void holter(){
    FILE *fp=NULL;
    fp=fopen("FILE.txt","w");
    /*reads information from user input*/
    double x, y;
    printf("enter start value: \n");
    scanf("%lf", &y);
    int points=0;
    while(points <= 200){
        y = tan(y+x*2);
        x = points;
        fprintf(fp, "%lf\t %lf\n",x,y);
        points++;
    }
};

void circle(){
  FILE *fp=NULL;
  fp=fopen("FILE.txt","w");
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

void LissajousFigure(){
double x(double theta){
    return sin(theta);
}
double y(double theta, double A,double n, double delta){
    return A*sin(n*theta+delta);
};

double theta;
FILE *fp=NULL;
double A,n,delta;
fp=fopen("FILE.txt","w");
/*Loop to calculate and store data-points*/
for(theta=0;theta<=5*M_PI;theta=theta+0.02){
    /*Change A, n or delta here*/
    A=1;
    n=3;
    delta=M_PI/4;
    fprintf(fp,"%lf\t%lf\n",x(theta),y(theta,A,n,delta));
    
}
}

void test(){
    FILE *fp=NULL;
    fp=fopen("FILE.txt","w");
    /*reads information from user input*/
    double x, y;
    printf("enter test value: \n");
    scanf("%lf", &y);
    int points=1;
    while(points <= 200){
        y = sin(y+x);
        x = points;
        fprintf(fp,"%lf\t %lf\n",x,y);
        points++;
    } 
}
