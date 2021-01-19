#include<stdio.h>
float reduce(float var){
    float value = (var * 100 + .5); 
    return value / 100;
}
int main(int argc, char const *argv[])
{
    int i,j,sum = 0;
    float n,remain;
    scanf("%f",&n);
    printf("NOTAS:\n");
    int A[6] = {100, 50, 20, 10, 5, 2};
    int B[6];
    for(i = 0; i<6; i++){
        for(j = i; n>= A[j]; n -= A[i]){
            sum ++;
        }
        remain = reduce(n);
        B[i] = sum;
        sum = 0;
    }
    for(i = 0; i<6; i++){
        printf("%d nota(s) de R$ %d.00\n",B[i],A[i]);
    }
    // printf("%f\n",remain);
    printf("MOEDAS:\n");
    float A1[] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
    int B1[6];
    for(i = 0;i<6; i++){
        for(j = i; remain>=A1[j]; remain -= A1[j]){
            sum ++;
        }
        B1[i] = sum;
        sum = 0;
    }
    for(i = 0; i<6; i++){
        printf("%d moeda(s) de R$ %.2f\n",B1[i],A1[i]);
    }
    return 0;
}