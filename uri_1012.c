#include<stdio.h>
int main(int argc, char const *argv[])
{
    double a,b,c;
    scanf("%lf %lf %lf",&a, &b, &c);
    double triangle,circle,trapezium,square,rectangle;
    triangle = (0.5 * a * c);
    circle = (3.14159 * (c*c));
    trapezium = (0.5 * (a + b) * c);
    square = (b*b);
    rectangle = (a * b);
    printf("TRIANGULO: %.3lf\n",triangle);
    printf("CIRCULO: %.3lf\n",circle);
    printf("TRAPEZIO: %.3lf\n",trapezium);
    printf("QUADRADO: %.3lf\n",square);
    printf("RETANGULO: %.3lf\n",rectangle);
    return 0;
}
