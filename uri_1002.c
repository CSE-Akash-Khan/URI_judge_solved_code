#include<stdio.h>
int main(int argc, char const *argv[])
{
    double n = 3.14159;
    double R,A;
    scanf("%lf",&R);
    A = n*(R*R);
    printf("A=%0.4lf\n",A);
    return 0;
}