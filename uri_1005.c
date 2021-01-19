#include<stdio.h>
int main(int argc, char const *argv[])
{
    double a,b,MEDIA;
    scanf("%lf %lf",&a,&b);
    MEDIA = (a*3.5+b*7.5)/(3.5+7.5);
    printf("MEDIA = %0.5lf\n",MEDIA);
    return 0;
}