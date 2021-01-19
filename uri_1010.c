#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,d,e;
    float c,f,amount;
    scanf("%d %d %f",&a, &b, &c);
    scanf("%d %d %f",&d, &e, &f);
    amount = ((c * b) + (f * e));
    printf("VALOR A PAGAR: R$ %.2f\n",amount);
    return 0;
}