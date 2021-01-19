#include<stdio.h>
int main(int argc, char const *argv[])
{
    float a,b,c,area;
    scanf("%f %f %f",&a,&b,&c);
    if((a+b > c) && (b + c>a) && (c+a > b)){
        printf("Perimetro = %.1f\n",a+b+c);
    }
    else{
        area = .5 * (a+b)*c;
        printf("Area = %.1f\n",area);
    }
    return 0;
}