#include<stdio.h>
int main(int argc, char const *argv[])
{
    double r,volume;
    scanf("%lf",&r);
    volume = (4/3.0 * 3.14159 * (r*r*r));
    printf("VOLUME = %.3lf\n",volume);
    return 0;
}