#include<stdio.h>
int main(int argc, char const *argv[])
{
    double a,b,c,MEDIA;
    scanf("%lf %lf %lf",&a,&b,&c);
    MEDIA = (a*2+b*3+c*5)/(2+3+5);
    printf("MEDIA = %0.1lf\n",MEDIA);
    return 0;
}