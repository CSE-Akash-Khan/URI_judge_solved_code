#include<stdio.h>
int main(int argc, char const *argv[])
{
    double n,A[100];
    int i;
    scanf("%lf",&n);
    A[0] = n;
    for(i = 1; i<100; i++){
        A[i] = A[i - 1] / 2;
    }
    for(i = 0; i<100; i++){
        printf("N[%d] = %.4lf\n",i,A[i]);
    }
    return 0;
}