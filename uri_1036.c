#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    float a,b,c,calculate,calculate2,D;
    scanf("%f %f %f",&a, &b, &c);
    D = (b*b - 4*a*c);
    if(D < 0 || a == 0.0){
        printf("Impossivel calcular\n");
    }
    else{
        calculate = (-b + sqrt((b*b) - 4 * a * c)) / (2 * a);
        calculate2 = (-b - sqrt((b*b) - 4 * a * c)) / (2 * a);
        printf("R1 = %.5f\n",calculate);
        printf("R2 = %.5f\n",calculate2);
    }
    return 0;
}